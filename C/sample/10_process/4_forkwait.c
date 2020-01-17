#include <stdio.h>
#include <unistd.h>
/* 부모 프로세스가 자식 프로세스를 생성하고 끝나기를 기다린다. */
int main() 
{
	int pid1, pid2, child, status;
	printf("[%d] 부모 프로세스 시작 \n", getpid( ));

	pid1 = fork();
	if (pid1 == 0) {
		printf("[%d] 자식1 프로세스 시작 \n", getpid( ));
		exit(1);
	}

	pid2 = fork();
	if (pid2 == 0) {
		printf("[%d] 자식2 프로세스 시작 \n", getpid( ));
		exit(1);
	}

	child = wait(&status); // 어떤 프로세스든 끝나기를 기다린다.
	printf("[%d] 자식 프로세스 %d 종료 \n", getpid(), child);

	// 2개 자식프로세스가 있는데 1개 자식프로세스만 끝나길 기다렸기 때문에 
    // 마지막 프로세스를 인지하지 못함
	child = wait(&status); // 어떤 프로세스든 끝나기를 기다린다.
	printf("[%d] 자식 프로세스 %d 종료 \n", getpid(), child);

	printf("\t종료 코드 %d\n", status>>8);
}
