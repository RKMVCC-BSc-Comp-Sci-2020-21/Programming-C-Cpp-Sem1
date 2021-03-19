#include<stdio.h>
main()
{
 int i,size,position,delitem,flag=0;
 printf("Enter size\n");
 scanf("%d",&size);
 int a[size],temp[size-1];
 printf("Enter numbers in array\n");
 for(i=0;i<size;i++) 
{
 scanf("%d",&a[i]);
 
}
 printf("Enter element to be deleted\n");
 scanf("%d",&delitem);
 for(i=0;i<size;i++)
{
 if(a[i]==delitem) 
{
 position=i;
 flag=1;
 
}
 
}
 if(flag==1) 
{
 for(i=0;i<size-1;i++)
{
 if(i<position) 
{
 temp[i]=a[i];
 
}
 if(i>=position) 
{
 temp[i]=a[i+1];
 
}
 
}
 printf("Array after deleting %d\n",delitem);
 for(i=0;i<size-1;i++) 
{
 printf("%d\n",temp[i]);
 
}
 
}
 else 
{
 printf("Number not found in array\n");
 
}

}
