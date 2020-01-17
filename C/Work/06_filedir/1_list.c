#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h> // DIR 관련 구조체 h
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	DIR *dp;
	char *dir;
	struct dirent *d;
	struct stat st;
	char path[BUFSIZ+1];
	if (argc == 1) {
		//작성 에러처리 - 입력이 없을 때 ---- 
	} else {
		//작성 에러처리 - 입력이 있을 때 ---- 
	}

//작성 조회할 디렉터리 열기, 해당 디렉터리 리스트업 시작 ---- 







//작성 조회할 디렉터리 열기, 해당 디렉터리 리스트업 종료 ---- 

	closedir(dp);
	exit(0);
}
