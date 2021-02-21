//write a c program to input a number and whether the number is perfect or not
//Name:- Avirup Dutta , Roll No:- 721

#include<stdio.h>
main(){
int num,i,sum=0;
printf("Enter a number to kno whether it is perfect or not\n");
scanf("%d",&num);
for(i=1;i<num;i++){
if(num%i=){
sum+=i;
}
}
if(sum==num){
printf("The givben number %d is perfect\n",num);
}
else{
printf("The given number %d is not perfect\n",num);
}
}
