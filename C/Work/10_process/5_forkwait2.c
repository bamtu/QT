#include <stdio.h>
#include <unistd.h>

int main() 
{
	int pid1, pid2, child, status;
	printf("[%d] 부모 프로세스 시작 \n", getpid( ));

	pid1 = fork();
	if (pid1 == 0) {
		printf("[%d] 자식1 프로세스 시작 \n", getpid( ));
		exit(1);
	}

	// 작업 시차 주기 -----

	pid2 = fork();
	if (pid2 == 0) {
		printf("[%d] 자식2 프로세스 시작 \n", getpid( ));
		exit(1);
	}

	// 작업 waitpid -----
	printf("[%d] 자식2 프로세스 %d 종료 \n", getpid( ), child);
	printf("\t종료 코드 %d\n", status>>8);
}
