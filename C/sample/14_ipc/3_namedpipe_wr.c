#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define MAXLINE 100
/* 이름 있는 파이프를 통해 메시지를 출력, 쓰기 전용, 이거 실행시키고 입력하면 받는 터미널 쪽에서 프린트. */
int main( ) 
{
	int fd, length, i;
	char message[MAXLINE];
	sprintf(message, "Hello from PID %d", getpid());
	length = strlen(message)+1;

	do {
		fd = open("myPipe", O_WRONLY);
		if (fd == -1) sleep(1);
	} while (fd == -1);

	for (i = 0; i <= 3; i++) {	//4번 보내고 끝.
		write(fd, message, length);
		printf("sended\n");
		sleep(3);
	}
	close(fd);
	return 0;
}

