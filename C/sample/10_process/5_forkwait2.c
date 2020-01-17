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

	usleep(100);

	pid2 = fork();
	if (pid2 == 0) {
		printf("[%d] 자식2 프로세스 시작 \n", getpid( ));
		exit(1);
	}

	child = waitpid(pid2, &status, 0); 
	printf("[%d] 자식2 프로세스 %d 종료 \n", getpid( ), child);
	printf("\t종료 코드 %d\n", status>>8);
}
