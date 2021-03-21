
// Name:- Avirup Dutta  ;  Roll No:- 721

// a simple assembly program code to add two numbers in c program

#include<stdio.h>  
void main() {  
   int a = 10, b = 20, c;  
   
   asm {  
      mov ax,a  
      mov bx,b  
      add ax,bx  
      mov c,ax  
   }  
   
   printf("c= %d",c);  
} 
