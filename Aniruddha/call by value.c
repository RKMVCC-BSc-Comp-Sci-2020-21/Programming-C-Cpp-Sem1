/* callByValue.c */
#include <stdio.h>

void test(int, int);

int main(){
  int num1 = 10, num2 = 50;
  printf("Before function call: num1 is %d and num2 is %d.\n", num1, num2);
  test(num1,num2);
  printf("After function call: num1 is %d and num2 is %d.\n", num1, num2);
  return 0;
}
void test(int x, int y){
  x *= 2;
  y *= 3;
  printf("Inside function test: x is %d and y is %d\n", x, y);
  return;
}

