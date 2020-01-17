#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

struct student {
	int id; 
	char name[20]; 
	struct student *next; 
};

int main() 
{ 
	int count = 0, id;
	char name[20];
	struct student *p, *head = NULL; 
	printf("학번과  이름을 입력하세요\n"); 	
	while (scanf("%d %s", &id, name) == 2)  {
// 작업 링크드리스트 등록 시작 -----
		












// 작업 링크드리스트 등록 종료 -----
	}

	printf("\n* 학생 정보(역순) *\n");

// 작업 링크드리스트 조회 시작 -----







// 작업 링크드리스트 조회 종료 -----
	printf("총 %d 명입니다.\n", count); 
	exit(0);
}

    

