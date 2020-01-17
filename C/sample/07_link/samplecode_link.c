#include <unistd.h>

int main(int argc, char *argv[ ])
{
   // hard link 생성
   if (link(argv[1], argv[2]) == -1) {
      exit(1);
   }

   // hard link 삭제
   if (unlink(argv[1]) == -1) {
      perror(argv[1]);
      exit(1);
   }

   exit(0);
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
// 링크 정보 표시
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[ ])
{
    char buffer[1024];
    int nread;
    nread = readlink(argv[1], buffer, 1024);
    if (nread > 0) {
        write(1, buffer, nread);
        exit(0);
    } else {
        fprintf(stderr, "오류 : 해당 링크 없음\n");
        exit(1);
    }
}


