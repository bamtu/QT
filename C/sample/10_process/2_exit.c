#include <stdio.h>
#include <stdlib.h>

static void exit_handler1(void), exit_handler2(void);

int main(void) {
	if (atexit(exit_handler1) != 0) {
		perror("exit_handler1 등록할 수 없음");
	}
	if (atexit(exit_handler2) != 0) {
		perror("exit_handler2 등록할 수 없음");
	}
	printf("main 끝 \n");
	exit(0);
}

static void exit_handler1(void) {
	printf("첫 번째 exit 처리기\n");
	fp = fopen("log.txt","w");
	fprintf(fp, "종료합니다.\n");
	fclose(fp);
	
	printf("exit_handler1 done \n");	

}

static void exit_handler2(void) {
	printf("두 번째 exit 처리기\n");
}
