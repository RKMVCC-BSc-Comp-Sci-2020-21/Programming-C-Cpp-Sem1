#include <stdio.h>
#include <math.h>

int GP(int a, int r, int n) {
  
   return( a * (int)(pow(r, n - 1)) );
}

int main() {
  
   int a = 1;
  
   int r = 2;
 
   int n = 8;
   printf("The %dth term of the series is: %d\n",n,GP(a, r, n) );
   return 0;
}
