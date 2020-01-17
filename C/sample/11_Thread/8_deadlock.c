#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h> 


/// 데드락 발생조건
/// 1. 공유자원에 대한 동시접근 불가
/// 2. 점유하고 기다리기
/// 3. 자원의 권한을 뺏어오지 못함
/// 4. 순환 형태로 대기함


int ncount1 = 1;    // 쓰레드간 공유되는 자원
int ncount2 = 1;    // 쓰레드간 공유되는 자원
pthread_mutex_t  mutex1 = PTHREAD_MUTEX_INITIALIZER; // 초기화
pthread_mutex_t  mutex2 = PTHREAD_MUTEX_INITIALIZER; // 초기화

// 쓰레드 함수 1
void* do_loop(void *data){
	int i; 
	while(1)
	{  
		if(ncount1 > 0)
		{
			pthread_mutex_lock(&mutex1); // 잠금을 생성한다.
			printf("loop1 # 1 : lock\n");
			pthread_mutex_lock(&mutex2); // 잠금을 생성한다. 
			printf("loop1 # 2 : lock\n");

			printf("loop1 # 1 : %d -> %d\n", ncount1, ncount1 - 1);
			ncount1--;
			printf("loop1 # 2 : %d -> %d\n", ncount2, ncount2 + 1);
			ncount2++;

			pthread_mutex_unlock(&mutex2); // 잠금을 해제한다.
			printf("loop1 # 2 : unlock\n");
			pthread_mutex_unlock(&mutex1); // 잠금을 해제한다.
			printf("loop1 # 1 : unlock\n");
		}
	}
}

// 쓰레드 함수 2
void* do_loop2(void *data){    
	int i;   
	while(1)
	{  
		if(ncount2 > 0)
		{
			pthread_mutex_lock(&mutex2); // 잠금을 생성한다. 
			printf("loop2 # 2 : lock\n");
			pthread_mutex_lock(&mutex1); // 잠금을 생성한다. 
			printf("loop2 # 1 : lock\n");

			printf("loop2 # 2 : %d -> %d\n", ncount2, ncount2 - 1);
			ncount2--;

			printf("loop2 # 1 : %d -> %d\n", ncount1, ncount1 + 1);
			ncount1++;

			pthread_mutex_unlock(&mutex1); // 잠금을 해제한다.
			printf("loop2 # 1 : unlock\n");
			pthread_mutex_unlock(&mutex2); // 잠금을 해제한다.
			printf("loop2 # 2 : unlock\n");
		}
	}
}   

 
int main()
{    
	int thr_id;    
	pthread_t p_thread[2];    
	int status;    
	int a = 1;      
	thr_id = pthread_create(&p_thread[0], NULL, do_loop, (void *)&a);    
	sleep(1);    
	thr_id = pthread_create(&p_thread[1], NULL, do_loop2, (void *)&a);    
	
	pthread_join(p_thread[0], (void *) &status);    
	pthread_join(p_thread[1], (void *) &status);    

	status = pthread_mutex_destroy(&mutex1);    
	printf("code  =  %d\n", status);    
	status = pthread_mutex_destroy(&mutex2);    
	printf("finished\n");    
	return 0;
}
