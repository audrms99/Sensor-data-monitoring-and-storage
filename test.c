#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void child_handler(int sig);

int main(void)
{
    signal(SIGCHLD, child_handler);
    pid_t pid;
    int fd[2];

    if (pipe(fd) < 0)
    {
        perror("pipe()");
        exit(1);
    }

    if ((pid = fork()) < 0)
    {
        perror("fork()");
        exit(1);
    }

    if (pid == 0)
    {
        char string[20];
        /*CHILD read*/
        close(fd[1]); // filedisciptor(write) close
        if (read(fd[0], string, sizeof(string)) > 0)
        {
            string[strcspn(string, "\n")] = 0;
            printf("PARENT says : %s\n", string);
        }
        close(fd[0]); // filedisciptor(read) close
        exit(0);
    }
    else
    {                 /*PARENT write*/
        close(fd[0]); // filedisciptor(read) close
        dup2(fd[1], STDOUT_FILENO);
        printf("Hello CHILD!");
        fflush(stdout);
        close(fd[1]); // filedisciptor(write) close
    }

    return 0;
}

void child_handler(int sig)
{
    int child_status;
    pid_t pid;
    while ((pid = waitpid(-1, &child_status, WNOHANG)) > 0)
        printf("Received signal, Reaping process[%d]\n", pid);
}