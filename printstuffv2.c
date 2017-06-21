#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(){
   printf("Hello World!\n");

   int fd,bytes;
   char content[fd];

   fd = open("/data/data/org.telegram.messenger/files/cache4.db", O_RDONLY);
   if (fd < 0) {
        printf("NONONO"); 
   }else{
      bytes =  read(fd, content, sizeof(content)-1);
      write(1, content, bytes);
   }

   close(fd);
   return 0;
}
