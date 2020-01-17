#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	if ( pid != 0 ) { /* parent process */
		while(1) {
			sleep(1);		
		}
	}
	else { /* child process */
		sleep(10);
		exit(42);
	}	
	return 0;
}

