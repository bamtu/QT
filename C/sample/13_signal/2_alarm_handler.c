#include <stdio.h>
#include <signal.h>

/* 알람 시그널을 처리 */

void alarmHandler();

int main( )
{
	signal(SIGALRM,alarmHandler);
	alarm(5);

	printf("무한 루프 \n");

	while (1) {
		sleep(1);
		printf("1초 경과 \n");
	}

	printf("실행되지 않음 \n");
}


void alarmHandler()
{
   printf("알람 발생\n");
   exit(0);
}

