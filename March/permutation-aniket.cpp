/*Program of permutation*/
#include <stdio.h>

int factorial(int n) {
   int f;

   for(f = 1; n > 1; n--)
      f *= n;

   return f;
}

int npr(int n,int r) {
   return factorial(n)/factorial(n-r);
}

int main() {
   int n, r;

   printf("\nEnter value of n: ");
   scanf("%d",&n);
   printf("\nEnter value of r: ");
   scanf("%d",&r);

   printf("%dp%d = %d \n", n, r, npr(n,r));

   return 0;
}
