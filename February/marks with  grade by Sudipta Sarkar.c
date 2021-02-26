#include<stdio.h>
int main(int argc, char *argv[])
{
    float a,b,c,d,e,total,per;
    char grade;
    printf("Enter your marks [Best of five] = ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    total = (a+b+c+d+e)/5;

    if(total>80)
    {
        grade='A';
    }
    else if(total<80 || total>60) {
        grade='B';
    }
   else if(total<60 || total>40)
    {
        grade='C';
    }
    else
    {
        printf("Fail!!!!!!!!!\n");
    }





           return 0;
}
