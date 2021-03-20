//Name:- Avirup Dutta  ,  Roll No:- 721

#include<stdio.h>
int addnumber(int a,int b);

int main(){
    int n1,n2,sum;
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);

    sum = addnumber(n1,n2);
    printf("Sum = %d",sum);    
    return 0;
}
int addnumber(int a,int b){
    int result;
    result=a+b;
    return result;
}
