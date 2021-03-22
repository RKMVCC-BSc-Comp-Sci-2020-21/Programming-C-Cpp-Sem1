#include<stdio.h>

int main()
{
 int Size, i, a[10], b[10];
 int Addition[10], Subtraction[10], Multiplication[10], Module[10];
 float Division[10];
  
 printf("\n Please Enter the Size of the Array\n");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the First Array Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }
   
 printf("\n Please Enter the Second Array Elements\n");
 for(i = 0; i < Size; i ++)
  {
      scanf("%d", &b[i]);
  }
  
 for(i = 0; i < Size; i ++)
  {
      Addition [i]= a[i] + b[i];
      Subtraction [i]= a[i] - b[i];
      Multiplication [i]= a[i] * b[i];
      Division [i] = a[i] / b[i];
      Module [i] = a[i] % b[i]; 
  }

 printf("\n Add\t Sub\t Multi\t Div\t Mod");
 for(i = 0; i < Size; i++)
  {
      printf("\n%d \t ", Addition[i]);
      printf("%d \t ", Subtraction[i]);
      printf("%d \t ", Multiplication[i]);
      printf("%.2f \t ", Division[i]);
      printf("%d \t ", Module[i]);
  }

  return 0;
} 
