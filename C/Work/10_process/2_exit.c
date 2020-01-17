#include <stdio.h>
#include <stdlib.h>

// 작업 핸들러 선언 -----

int main(void) {

// 작업 핸들러 등록 시작 -----






// 작업 핸들러 등록 종로 -----
	printf("main 끝 \n");
	exit(0);
}

static void exit_handler1(void) {
	printf("첫 번째 exit 처리기\n");
}

static void exit_handler2(void) {
	printf("두 번째 exit 처리기\n");
}
