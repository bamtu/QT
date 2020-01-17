#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/// 작업 클린업함수 구현 시작 ------



/// 작업 클린업함수 구현 종료 ------


int ret;

void* t_function(void *data)
{    
	int id = *((int *)data);    
	int i = 0;

	// 작업 쓰레드 종료 함수 등록 -----

	while(1)    {        
		printf("ID : %d, VALUE : %d\n", id, i);   
		i++; 
		sleep(1);    

		if(i>10) {
			break;
		}
	}

	ret = id;

// 작업 쓰레드 종료 및 쓰레드 종료 함수 등록 해제 시작 -----


// 작업 쓰레드 종료 및 쓰레드 종료 함수 등록 해제 종료 -----
}


int main()
{    
	pthread_t p_thread[2];    
	int thr_id;    
	int *status;   
	int a = 1;    
	int b = 2;    
     
	thr_id = pthread_create(&p_thread[0], NULL, t_function, (void *)&a);    
	if (thr_id < 0) {        
		perror("thread create error : ");  
		exit(0);    
	}   

   
	thr_id = pthread_create(&p_thread[1], NULL, t_function, (void *)&b);    
	if (thr_id < 0) {        
		perror("thread create error : ");  
		exit(0);    
	}   
	

  
	pthread_join(p_thread[0], (void **)&status);   
    printf("Thread 1 End %d\n", *status); 
	pthread_join(p_thread[1], (void **)&status); 
    printf("Thread 2 End %d\n", *status);   

	return 0;
}
