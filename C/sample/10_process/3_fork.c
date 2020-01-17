#include <stdio.h>
#include <unistd.h>
/* 자식 프로세스를 생성한다. */
int main()
{ 
	int pid;
	printf("[%d] 프로세스 시작 \n", getpid());
	pid = fork();
	printf("[%d] 프로세스 : 리턴값 %d\n", getpid(), pid);


	if (pid ==0) {   // 자식 프로세스
		printf("[Child] : Hello, world pid=%d\n", getpid());
	}
	else {   // 부모 프로세스
		printf("[Parent] : Hello, world pid=%d\n", getpid());
		wait();
		
		int child, status;
		child = wait(&status);
	}
}
