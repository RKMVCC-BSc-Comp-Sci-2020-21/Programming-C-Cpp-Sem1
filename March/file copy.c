#include <stdio.h>

 main () {
   FILE *fp, *fs;
   char str[60];
   fp = fopen("file.txt" , "r");
   fs=fopen(" file1.txt","w");
   if( fgets (str, 60, fp)!=NULL ) {
      fprintf(fs,"%s",str);
   }
   fclose(fp);
   fclose(fs);
}
