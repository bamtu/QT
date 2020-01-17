#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t addcond = PTHREAD_COND_INITIALIZER;
pthread_cond_t subcond = PTHREAD_COND_INITIALIZER;

int flag = 0;

void *th1_func(void *arg)
{
// 작업 뮤텍스 signal, wait 시작 -----











// 작업 뮤텍스 signal, wait 종료 -----
	return NULL;
}


void *th2_func(void *arg)
{
// 작업 뮤텍스 signal, wait 시작 -----











// 작업 뮤텍스 signal, wait 종료 -----
	return NULL;
}


int main()
{
	pthread_t threadID1, threadID2;

	pthread_create(&threadID1, NULL, th1_func, NULL);
	usleep(100);
	pthread_create(&threadID2, NULL, th2_func, NULL);

	pthread_join(threadID1, NULL);
	pthread_join(threadID2, NULL);

	printf("pthread wait finish !! \n"); 
	return 0;
}
