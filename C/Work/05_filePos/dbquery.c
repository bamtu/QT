#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

//작성 include -----


int main(int argc, char *argv[])
{
	char c;
	int fd, id;
	struct student record;
	if (argc < 2) {
		fprintf(stderr, "사용법 : %s file\n", argv[0]);
		exit(1);
	}

//작성 파일 열기 시작 -----




//작성 파일 열기 종료 -----

	do {
		printf("\n검색할 학생의 학번 입력(1000):");
		if (scanf("%d", &id) == 1) {
//작성 파일 위치 포인터 이동 및 값 읽기 시작 -----







//작성 파일 위치 포인터 이동 및 값 읽기 종료 -----
		} else {
			 printf("입력 오류");
		}

		printf("계속하겠습니까?(Y/N)");
		scanf(" %c", &c);

	} while (c=='Y');

	close(fd);
	exit(0);
}

