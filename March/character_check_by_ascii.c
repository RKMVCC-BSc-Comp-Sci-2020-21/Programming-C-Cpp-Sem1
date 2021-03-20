//CHECK CHARACTER by ASCII VALUE
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a chracter:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
      printf("the chracter is a capital letter");
    else if(ch>=97 && ch<=122)
      printf("the chracter is a small case letter");
    else if(ch>=48 && ch<=57)
      printf("the chracter is a digit");
    else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
      printf("this is a special symbol");
    return 0;        
}
