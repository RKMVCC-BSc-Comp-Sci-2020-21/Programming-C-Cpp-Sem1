//sayankp
#include <stdio.h>

int main()
{
    
    int a = 20;
    int *p = &a;
    
    double d = 20.35;
    double *pd = &d;
 
   printf("Size of int is %lu\n",sizeof(int));
   
   printf("Size of double is %lu\n",sizeof(double));
   
   printf("Size of pointer is %lu\n",sizeof(p));
   
   printf("Size of pointer is %lu\n",sizeof(pd));
   
   printf("address of a is %p\n",&a);
   
   printf("address of a is %p\n",p); 
   
   printf("address of d is %p\n",&d);
   
   printf("address of d is %p\n",pd);
   
   printf("address of p is %p\n",&p);
   
   printf("address of pd is %p\n",&pd);

   
   return 0;
}
