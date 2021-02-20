//CODED BY SUMIT SAHA.STUDENTS OF RKMVCC.
//PROGRAM TO CONVERT THE UPPERCASE LETTERS TO LOWER CASE LETTERS AND LOWER CASE LETTERS TO UPPER CASE LETTERS.
//PROGRAM CODE:-
#include<stdio.h>
char lowertoupper(char);

int main()
{
    int a,b,c,d,e;
    char ch;
    printf("ENTER A LINE OF TEXT:");
    while((c=getchar())!='\n')
    {
        putchar(lowertoupper(c));

    }
    printf("\n");
    return 0;

}
char lowertoupper(char c1)
{
    char c2=' ';
   // c2=(c1>='a'&&c1<='z')?(c1-32):(c1+32);
   if(c1>='a'&&c1<='z')
       c2=c1-32;
   else if (c1>='A'&&c1<='Z')
       c2=c1+32;
   else
       c2=c1;
    return c2;
}
