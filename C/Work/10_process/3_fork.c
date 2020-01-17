#include <stdio.h>
#include <unistd.h>

int main()
{ 
	int pid;
	printf("[%d] 프로세스 시작 \n", getpid());
	// 작업 자식 프로세스 생성 ----
	printf("[%d] 프로세스 : 리턴값 %d\n", getpid(), pid);

	// 작업 자식 프로세스 구분 조건문 시작 ----
		printf("[Child] : Hello, world pid=%d\n", getpid());
	}
	else {   // 부모 프로세스
		printf("[Parent] : Hello, world pid=%d\n", getpid());
	}
}
