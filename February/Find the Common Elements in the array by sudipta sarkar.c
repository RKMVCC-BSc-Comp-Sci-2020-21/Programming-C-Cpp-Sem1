#include<stdio.h>

int main(int argc, char *argv[])
{
    int i,c=0;
        char a;
     char X[10]={'x','v','b','c','d','v','d','b','c','v'};

    printf("enter the char = ");
    scanf("%c",&a);

    for(i=0;i<10;i++)
    {
        if(X[i]==a)
        {
            c++;
        }
    }
    printf("The common value is = %d \n\n",c);
    return 0;
}
