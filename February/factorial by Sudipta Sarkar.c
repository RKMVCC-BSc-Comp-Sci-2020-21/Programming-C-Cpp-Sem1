
#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    long long f = 1;

    printf("Enter the number = ");
    scanf("%d",&n);

    if(0>n)
    {
        printf("Error!!!!\n");
    }
    else{

    while(n>1) {

        f*=n;
        n--;
    }
        }
    printf("Enter the factorial is = %lld \n",f);

    return 0;
}
