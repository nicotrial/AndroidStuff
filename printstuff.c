#include <stdio.h>

int main(){
   printf("Hello World!\n");
   FILE *fp;
   char ch, file_name[25];
   fp = fopen ("/data/data/org.telegram.messenger/files/cache4.db","r");
   //fp = fopen("/data/local/tmp/hello", "r");
   while( ( ch = fgetc(fp) ) != EOF )
      printf("%c",ch);
   fclose(fp);
   return 0;
}
