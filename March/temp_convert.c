#include<stdio.h>
int main()
{
    double c;
    int f;
    for(f=0;f<=100;f+=5)
    {
        
        c= ((double)5/9)*(f-32);
        printf("%dF = %lfC\n",f,c);
    }
    return 0;
}
