#include <stdio.h>
#define MAX 5
int front=0;
int rear=0;
int queue[MAX];
 
int IsEmpty(void){
    if(front==rear)//front와 rear가 같으면 큐는 비어있는 상태 
        return 1;
    else 
		return 0;
}

int IsFull(void){
    int tmp=(rear+1)%MAX; //원형 큐에서 rear+1을 MAX로 나눈 나머지값이
    if(tmp==front)//front와 같으면 큐는 가득차 있는 상태 
        return 1;
    else
        return 0;
}


int printque(){	
    for(int i=0;i<MAX;i++)
	{
		printf("%-6d", queue[i]);
	}
	printf("\n");
}

void addq(int value){
    if(IsFull() == 1)
        printf("Queue is Full.\n");
    else
	{
        queue[rear]=value;	
        rear = (rear+1)%MAX;
	}
	printque();
}

int subq(){
	int rtn = 0;
    if(IsEmpty() == 1)
        printf("Queue is Empty.\n");
    else{
        rtn = queue[front];
		queue[front] = 999;
        front = (front+1)%MAX;
    }
	return rtn;
}
 
int main(){    
    addq(1);
    addq(2);
    addq(3);
    addq(4);

    printf("%d\n",subq());
    printf("%d\n",subq());
    printf("%d\n",subq());
    printf("%d\n",subq());

    addq(5);
    addq(6);
    addq(7);

    printf("%d\n",subq());
    printf("%d\n",subq());
    
    return 0;
}

