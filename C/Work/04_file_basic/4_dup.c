#include <unistd.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
// 작성 필요한 fd 변수 -----


	if((fd1 = creat("myfile", 0600)) == -1)
		perror("myfile");

// fd별 write 사용 시작 ----



// fd별 write 사용 종료 ----

	exit(0); 
}
