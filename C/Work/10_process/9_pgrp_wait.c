#include <sys/types.h> 
#include <unistd.h> 

int main()
{
	int pid, gid;
	printf("PARENT: PID = %d  GID = %d \n", getpid(), getpgrp());
	pid = fork();
	if (pid == 0) {
		setpgid(0, 0);
		printf("CHILD1: PID = %d  GID = %d  PPID = %d \n", getpid(), getpgrp(), getppid());
		sleep(3);
		printf("CHILD1: PID = %d  GID = %d  PPID = %d 종료 \n", getpid(), getpgrp(), getppid());
		exit(255);
	}
	sleep(1);
	pid = fork();료
	if (pid == 0) {
		printf("CHILD2: PID = %d  GID = %d  PPID = %d \n", getpid(), getpgrp(), getppid());
		sleep(5);
		printf("CHILD2: PID = %d  GID = %d  PPID = %d 종료 \n", getpid(), getpgrp(), getppid());
		exit(254);
	}

	
	// 작업 waitpid 실습 시작 -----




	// 작업 waitpid 실습 종 -----

	printf("\t종료 코드 %d\n", status>>8);
	printf("PARENT: PID = %d  GID = %d  CPID = %d \n", getpid(), getpgrp(), pid);
}
