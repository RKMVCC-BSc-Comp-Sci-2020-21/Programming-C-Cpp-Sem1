#include<stdio.h>
main()
{
int i,j,k,size,count=0,position;
printf("Enter number of elements\n");
scanf("%d",&size);
int a[size-1],*temp;
printf("Enter numbers\n");
for(i=0;i<size;i++)
{
 scanf("%d",&a[i]);
}

temp=a;

for(i=0;i<size;i++)
{
 for(j=i+1;j<size;)
 {
    if(a[i]==a[j])
    {

     for(k=j;k<size;k++)
     {
      a[k]=a[k+1];
     }
         size--;
        }
    else
    {
      j++;
     }
 }
}

printf("After removing repeated elements\n");
  for(i=0;i<size;i++)
 {

  printf("%d\n",a[i]);
 }
}
