#include<stdio.h>

#include<string.h>
main()
{
int i=0,flag=0,len1,len2;
char str1[100],str2[100];
printf("Enter a string 1\n");
gets(str1);
printf("Enter a string 2\n");
gets(str2);
len1=strlen(str1);
len2=strlen(str2);
while(i<len1&&i<len2)
{
 if(str1[i]==str2[i]) 
{
 i++;
 continue;
 
}
 if(str1[i]<str2[i]) 
{
 flag=-1;
 break;
 
}
 if(str1[i]>str2[i]) 
{
 flag=1;
 break;
 
}

}
if(flag==0)
{
 printf("Both strings are equal\n");

}
if(flag==-1)
{
 printf("String1 is less than string 2\n");

}
if(flag==1)
{
 printf("String 1 is greater than string 2\n");

}

}
