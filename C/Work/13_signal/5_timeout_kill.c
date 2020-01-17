#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int pid;
void alarmHandler();

int main(int argc, char *argv[])
{ 
// 작업 알람시그널 활용 시작 -----















// 작업 알람시그널 활용 종료 -----
}

void alarmHandler()
{
   printf("[알람] 자식 프로세스 %d 시간 초과\n", pid);
   //작업 자식프로세스 종료 -----
}

