#include<stdio.h>

int main() {
   FILE *f;
   char s;
   f=fopen("D:\new.txt","r");
   while((s=fgetc(f))!=EOF) {
      printf("%c",s);
   }
   fclose(f);

   return 0;
   
}
