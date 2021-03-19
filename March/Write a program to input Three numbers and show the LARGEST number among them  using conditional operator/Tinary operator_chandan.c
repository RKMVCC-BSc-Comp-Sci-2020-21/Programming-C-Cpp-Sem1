/* Write a program to input Three numbers and show the LARGEST number among them 
using conditional operator/ Tinary operator.*/

# include <stdio.h>

main() 
  
{  
    int n1,n2,n3,max;  
     printf("Please Enter Three different values\n");
     scanf("%d%d%d%d",&n1,&n2,&n3,&max);
     max = (n1>n2 && n1>n3)?n1:(n2>n3)?n2:n3;
  
     //[//max =(n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3  ? n2 : n3);] 
  
    printf("largest number among %d,%d,%d is %d\n",n1,n2,n3,max);
 
}
