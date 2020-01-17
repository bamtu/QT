#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	if ( pid != 0 ) { /* parent process */
		// 작업 좀비프로세스 해결 소스 작성 시작 -----









		// 작업 좀비프로세스 해결 소스 작성 종료 -----
	}
	else { /* child process */
		sleep(10);
		exit(42);
	}	
	return 0;
}

