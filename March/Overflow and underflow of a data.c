/*
  overflow.c
  Overflow and Underflow of Data
*/

#include <stdio.h>
#include <limits.h>

int main(){
  printf("Minimum value of int: %d\n", INT_MIN);
  printf("Maximum value of int: %d\n", INT_MAX);
  
  printf("Overflow\n");
  int num = INT_MAX;
  printf("num is %d and (num + 1) is %d\n", num, num+1);
  
  printf("underflow\n");
  int num2 = INT_MIN;
  printf("num2 is %d and (num2 - 1) is %d\n", num2, num2-1);
  
  return 0;
}
