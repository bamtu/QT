#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{
	int fd;
	fd = creat("event", 0644);
	if(fd == -1){
		printf("file creation error\n");
	}
	else
	{ 
		printf("file created\n");
	}
	
	fd = open("event", O_RDWR |  O_TRUNC, 0644);
	if(fd == -1){
             	 printf("file open error\n");
        }
        else
        {
        	 printf("file opened\n");
        }
	char text[30];
	scanf("%s", text);
	write(fd, text, 30);
	close(fd);

	
}
