#include<stdio.h>
main()
{
 int i,size,max=0,min=0;
 printf("Enter size to find largest and smallest of given numbers\n");
 scanf("%d",&size);
 int a[size];
 printf("Enter numbers in array\n");
 for(i=0;i<size;i++) 
{
 scanf("%d",&a[i]);
 
}
 min=a[0];
 max=a[0];
 for(i=0;i<size;i++) 
{
 if(a[i]>max) 
{
 max=a[i];
 
}
 if(a[i]<min) 
{
 min=a[i];
 
}
 
}
 printf("The largest number is %d\n",max);
 printf("The smallest number is %d\n",min);

}
