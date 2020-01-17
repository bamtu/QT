#include <unistd.h>
#define MAXLINE 100

 int main( )
{
	int n, length, fd[2];
	int pid;
	char message[MAXLINE], line[MAXLINE];

	// 작업 파이프 생성 -----

	if ((pid = fork()) == 0) {
		close(fd[0]);
		sprintf(message, "Hello from PID  %d\n", getpid());
		length = strlen(message)+1;
		// 작업 생성한 파이프에 데이터 쓰기 -----
	} else {  
		close(fd[1]);
		// 작업 생성한 파이프에서 데이터 읽기 -----
		printf("[%d] %s", getpid(), line);
	}

	exit(0);
 }
