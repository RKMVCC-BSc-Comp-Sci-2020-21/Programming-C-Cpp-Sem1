#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int n,i;

    printf("Enter the no fo elements of an array = ");
    scanf("%d",&n);
     p = (int*)malloc(n*sizeof (int));

     printf("Enter the elements of Array = ");

     for(i=0;i<n;i++)
     {
     scanf("%d",&p[i]);
     }


     printf("The printed values are ---\n");

     for(i=0;i<n;i++)
     {
         printf("\n\t %d \t",p[i]);
     }
    return 0;
}
