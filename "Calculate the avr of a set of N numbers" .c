/* average.c
   Calculate the average of a set of N numbers.
*/

#include <stdio.h>
#define N 10		// symbolic constant

int main(){
  int count = 0;
  double number, sum = 0, average;
  while(count < N){
    printf("Enter an number: ");
    scanf("%lf", &number);
    sum = sum + number;
    count = count + 1;
  }
  average = sum / N;
  printf("Average is %lf\n", average);
  return 0;
}
