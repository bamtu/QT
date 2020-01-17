#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define DEFAULT_PROTOCOL 0
#define MAXLINE 100

int readLine(int fd, char* str)
{
	int n;
	do {
		n = read(fd, str, 1);
	} while(n > 0 && *str++ != NULL);
	return(n > 0);
}

int main (int argc, char* argv[])
{
// 작업 파일클라이언트 기능 시작 -----































// 작업 파일클라이언트 기능 종료 -----
}


