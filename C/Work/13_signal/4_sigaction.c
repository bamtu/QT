#include <stdio.h>
#include <signal.h>

struct sigaction newact;
struct sigaction oldact;

void sigint_handler(int signo); 


int main( void)
{   
	// 작업 시그널 처리기 지정 -----
	// 작업 시그널 처리기 변경 및 등록 -----

	while(1){
		printf( "Ctrl-C를 눌러 보세요 !\n"); 
		sleep(1);
	}
}

void sigint_handler(int signo)
{
	printf( "%d 번 시그널 처리!\n", signo);
	printf( "또 누르면 종료됩니다.\n");
	// 작업 시그널 처리기 기존으로 변경 -----
}


