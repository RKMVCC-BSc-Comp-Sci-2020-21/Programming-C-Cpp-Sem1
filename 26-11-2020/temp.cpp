// Temperature Calculator in C programming By Sudipta Sarkar....

#include<stdio.h>
int main()                       

{
    char X = 0;
    char c = 0;
    char C = 0;
    char f = 0;
    char F = 0;
    
    printf("Enter yours Known Temperature type (C or F): ");
        scanf("%c",&X);

      if (X == 'c'|| X =='C')            				 //Calculate F
   
      {
	   float c,f;
       printf("enter temperature in C: \t");
       scanf("%f",&c);

        f = (c*9.0/5.0)+32.0;

       printf("The F = %f\n\a",f);
	  }
	 
      else                    //Calculate C
   
      {
	    float c,f;
       printf("enter temperature in F: \t");
       scanf("%f",&f);

       c = (5.0*f - 160.0)/9.0 ;
       printf("The C = %f\n\a",c); 
	  
	   }
	 
	 
     
     
     
     
  
   
   return 0;
}

