#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

//작성 include ----

int main(int argc, char *argv[])
{
	int fd, id;
	char c;
	struct student record;

	if (argc < 2) {
		fprintf(stderr, "사용법 : %s file\n", argv[0]);
		exit(1);
	}

	if ((fd = open(argv[1], O_RDWR)) == -1) {
		perror(argv[1]);
		exit(2);
	}

	do {
		printf("수정할 학생의 학번 입력(1000): ");
//작성 학번 입력 후 위치 이동, 새로운 점수 입력 후 저장 시작 ----














//작성 학번 입력 후 위치 이동, 새로운 점수 입력 후 저장 종료 ----

		printf("계속하겠습니까?(Y/N)");
		scanf(" %c",&c);

	} while (c == 'Y');
	close(fd);

	exit(0);
}
