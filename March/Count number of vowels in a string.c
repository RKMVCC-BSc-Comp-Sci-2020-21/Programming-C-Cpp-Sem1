#include<stdio.h>
main()
{
 char s[100];
 int i,count=0;
 printf("Enter a string to know how many vowels are there \n");
 scanf("%s",&s);
 for(i=0;s[i]!='\0';i++) 
{
 if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u') 
{
 count++;
 
}
 
}
 if(count==0) 
{
 printf("No vowels are there \n");
 
}
 else 
{
 printf("Number of vowels in %s is %d\n",s,count);
 
}

}
