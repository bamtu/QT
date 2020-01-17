#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[])
{
	int child, pid, fd, status;

	pid = fork( );

	if (pid == 0) {

		// 작업 자식프로세스에서 특정 파일을 열어서 표준출력에 연결, 그리고 외부프로그램 실행 시작 ----
		






		// 작업 자식프로세스에서 특정 파일을 열어서 표준출력에 연결, 그리고 외부프로그램 실행 종료 ----
		fprintf(stderr, "%s:실행 불가\n",argv[1]);

	} else {
		child = wait(&status);
		printf("[%d] 자식 프로세스 %d 종료 \n", getpid(), child);
		fprintf(stdout, "부모 프로세스 종료");
	}
}
