#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// 작성 include -----

int main(int argc, char *argv[])
{
// 작성 필요변수 시작 -----


// 작성 필요변수 종료 -----

	if (argc < 2) {
		fprintf(stderr, "사용법 : %s file\n", argv[0]);
		exit(1);
	}

// 작성 파일열기 시작 -----





// 작성 파일열기 종료 -----

	printf("%-9s %-8s %-4s\n", "학번(1000)", "이름", "점수");

// 작성 입력받은 후 위치 지정 및 저장 시작 -----




// 작성 입력받은 후 위치 지정 및 저장 종료 -----

	close(fd);
	exit(0);
}

