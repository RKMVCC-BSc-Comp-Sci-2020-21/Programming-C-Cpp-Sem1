//REVERSE OF NUMBER
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
int main()
{
    int a,b,n,n1,n2,n3,n4,n5;
    printf("\n a five digits number is:");
    scanf("%d",&a);
    n1=a%10;
    n=a/10;
    n2=n%10;
    n=n/10;
    n3=n%10;
    n=n/10;
    n4=n%10;
    n=n/10;
    n5=n%10;
    b=(n1*10000+n2*1000+n3*100+n4*10+n5*1);
    printf("the reverse of that number is :%d\n",b);
    if(b==a)
      printf("the number is equal");
    else
      printf("the number is not equal");
    return 0;  
}
