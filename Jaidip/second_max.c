#include <stdio.h>
#include<limits.h>
void secmax(int a[], int n);
int main()
{
    int n;

    printf("Mention the array size to be created: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    secmax(a,n);
    

    return 0;
}

void secmax(int a[], int n)
{
    if(n<2){
        printf("Invalid input, array should have atleast 2 elements");
        return;
    }

    int i,j;
    i=j=INT_MIN;

    for(int k=0;k<n;k++)
    {
        if(a[k]>i)
        {
            j=i;
            i=a[k];
        }
        else if(a[k]>j && a[k]<i)
        {
            j=a[k];
        }

    }

    printf("Second largest element is %d",j);

}