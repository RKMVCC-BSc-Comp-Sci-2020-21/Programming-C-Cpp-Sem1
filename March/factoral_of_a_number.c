//By Dipmalya Hazari
#include <stdio.h>

int main(){

    unsigned int n;
    unsigned long long factorial=1;
    
    printf("Enter the positive integer :\n",n);
    scanf("%d",&n);

    for (int i = 1; i <= n; ++i)
    {
        factorial*=i;
    }
    printf("the value of factorial %d is :%d\n",n,factorial);

}
