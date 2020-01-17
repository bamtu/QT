#include <stdio.h>


int main(){
	
	int fd;
	while(1){
		fd = open("event", O_RDWR, 0644);
		if(fd != -1){
			printf("event file detected...\n");
			fd = read(fd, text, 30);
			printf("In event file, %s", text);
			close(fd);
		}
	}
}

