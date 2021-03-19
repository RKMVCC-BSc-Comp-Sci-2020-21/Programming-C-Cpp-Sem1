#include<stdio.h>

#include<string.h>
main()
{
 int i,word=1;
 char str[100];
 printf("Enter a string\n");
 gets(str);
 for(i=0;i<strlen(str);i++) 
{
 if(str[i]==' ') 
{
 word++;
 
}
 
}
 printf("%d\n",word);

}
