#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    
    printf("Enter any number: ");
    scanf("%d",&n);
    int j=sqrt(n);
    
    printf("\nThe factors are: ");v
    for(int i=2;i<=j;i++)
    {
        
        if(n%i==0)
        {
            printf("%d %d ",i,(n/i));
            count++;

        }
    }
    if(count==0)
    {
        printf("None");
    }

    return 0;


}
