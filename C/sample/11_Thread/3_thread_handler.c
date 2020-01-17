#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static void cleanup(void *arg) {
    printf("Thread Clean up\n");
}

// 쓰레드 함수
int ret;

void* t_function(void *data)
{    
	int id = *((int *)data);    
	int i = 0;

	pthread_cleanup_push(cleanup, NULL);

	while(1)    {        
		printf("ID : %d, VALUE : %d\n", id, i);   
		i++; 
		sleep(1);    

		if(i>10) {
			break;
		}
	}

	ret = id;
    //return (void *)&ret;
	// 또는
	pthread_exit((void *)&ret);

    pthread_cleanup_pop(0);
}


int main()
{    
	pthread_t p_thread[2];    
	int thr_id;    
	int *status;   
	int a = 1;    
	int b = 2;    
	// 쓰레드 생성 아규먼트로 1 을 넘긴다.      
	thr_id = pthread_create(&p_thread[0], NULL, t_function, (void *)&a);    
	if (thr_id < 0) {        
		perror("thread create error : ");  
		exit(0);    
	}   
 
	// 쓰레드 생성 아규먼트로 2 를 넘긴다.     
	thr_id = pthread_create(&p_thread[1], NULL, t_function, (void *)&b);    
	if (thr_id < 0) {        
		perror("thread create error : ");  
		exit(0);    
	}   
	
	// 쓰레드 종료를 기다린다.     
	pthread_join(p_thread[0], (void **)&status);   
    printf("Thread 1 End %d\n", *status); 
	pthread_join(p_thread[1], (void **)&status); 
    printf("Thread 2 End %d\n", *status);   

	return 0;
}
