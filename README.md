프로젝트 제목: 센서 데이터 모니터링 및 저장
목표:
가상의 센서 데이터를 생성하고, 프로세스 간 통신(IPC), MariaDB(또는 MySQL)를 사용하여 데이터를 저장하고, MQTT를 통해 데이터를 전송하는 Linux 프로젝트.

도구 및 기술:
리눅스 기반 시스템
C 프로그래밍 언어
Python 프로그래밍 언어
IPC 메커니즘 (예: 파이프, 소켓, 공유메모리, 메시지큐, 세마포어)
MariaDB (또는 MySQL) 데이터베이스
MQTT 데이터 전송
모의 센서 데이터
작업:
가상의 센서 데이터 생성 (C):

C 프로그램을 작성하여 가상의 센서 데이터를 생성합니다.
프로그램은 무작위 센서 값을 생성하거나 특정 패턴을 따를 수 있어야 합니다.
IPC 메커니즘을 사용하여 이 데이터를 다른 프로세스와 통신하도록 만듭니다.
프로세스 간 통신 (IPC):
C에서 IPC 메커니즘을 구현합니다.
시뮬레이션된 센서 데이터 생성 프로세스와 다른 프로세스 간에 데이터를 교환합니다.

MariaDB 데이터베이스 통합 (Python):
Python 스크립트를 작성하여 MariaDB에 연결합니다.
데이터베이스 및 센서 데이터를 저장할 테이블을 생성합니다.
시뮬레이션된 센서 데이터를 MariaDB 데이터베이스에 삽입하는 메커니즘을 개발합니다.

MQTT 통합 (Python):
Python 스크립트를 작성하여 센서 데이터를 MQTT 브로커에 전송합니다.
MQTT 데이터는 실시간으로 전송되어야 합니다.

데이터 모니터링 및 시각화 (Python):
Python 스크립트를 작성하여 센서 데이터를 모니터링하고 시각화합니다.
Matplotlib 또는 Plotly와 같은 라이브러리를 사용하여 실시간 플롯을 생성합니다.
IPC 및 MQTT로부터 수신한 데이터를 표시합니다.
​
문서화 및 발표자료 제출:
e
프로젝트를 설정하고 실행하는 Jupyter 노트북 파일을 작성합니다.
​프로젝트를 설정하고 실행하는 방법을 설명하는 슬라이드(PPT, 한글, 구글 슬라이드 등) 파일을 작성, 제출합니다.

결과물:
가상의 센서 데이터 생성 및 IPC를 위한 C 프로그램.
MariaDB 통합, MQTT 통합 및 데이터 모니터링을 위한 Python 스크립트.
프로젝트 Jupytr 노트북 파일​.
프로젝트를 요약하는 발표 자료.

참고사항

1. C언어 센서값, IPC, DB저장 및 MQTT전송, Python DB 데이터처리
2. Python 센서값, IPC, DB저장 및 MQTT전송, Python DB 데이터처리
3. 기말과제(기말평가용) 수행을 위한 보조 자료 제공

C언어 기반,
Sensor값 - IPC - DB & MQTT publish - MQTT subscribe

FAQ

1. 강의자료(C언어, Python 기반 방법)를 기본으로,
   추가로 제공한 (C언어 기반 방법) abcExec, consumer 소스코드의 구조를 이해하여,
   유사 또는 개선된 방법으로 구현하기를 바랍니다.
   여러 센서를 사용하는 것이 좋으나, 온도 센서 하나만 이용하는 경우에도,
   기후데이터 관리시스템 일수도 있고,
   보일러관리 시스템일 수도 있고,
   태양광발전량예측보조시스템 일 수도 있습니다.

목적에 따라 센서의 종류가 정해지고, 단말, Edge에서 IPC를 통해 DB, MQTT로 전송하고 AI분석하여 웹에 plot하는 것이 목표가 됩니다.
목표를 지향하고 가능한 부분까지 해결해서 제출하기 바랍니다.

선택 가능
가능한 옵션을 찾아서 해결바람
노트북 사용은 필수가 아니고, Python을 사용할 경우 선택함

