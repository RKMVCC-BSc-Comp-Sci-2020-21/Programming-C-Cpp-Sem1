/*devloped by Soubhagya PAul*/

//ROOT OF A NON LINEAR EQUATION BY BISECTION METHOD//

#include<stdio.h>
#include<conio.h>
#include<math.h>
float eqn(float x)
{
 float result;
 result=x*x*x-9*x+1;
 return result;
}
int main(void)
{
 	float x0,x1,x2,f0,f1,f2,error;
 	
 	printf("\n\tENTER THE LOWER INTERVAL OF THE FUNCTION: ");
 	scanf("%f",&x1);
 	printf("\n\tENTER THE UPPER INTERVAL OF THE FUNCTION: ");
 	scanf("%f",&x1);
 	printf("\n\tENTER THE THRESHHOLD CONDITION OF THE FUNCTION: ");
 	scanf("%f",&error);
 	fflush(stdin);
 	f1=eqn(x1);
 	f2=eqn(x2);
 	if((f1*f2)>0)
 	{
  		printf("\n\tNO ROOT EXISTS IN THE INTERVAL.");
	
	}
 	else if(f1*f2<0)
 	{
		while(fabs(x2-x1)/x2>error)
    	{
     		x0=(x1+x2)/2;
     		f0=eqn(x0);
     		if(f0==0)
     		{
      			printf("\n\tThe root of the equation is: %f",x0);
      			break;
    		}
    	f1=eqn(x1);
    	f2=eqn(x2);
    	if((f0*f1)<0)
     	{
    		x2=x0;
    	}
    	else if((f0*f2)<0)
    	{
      		x1=x0;
     	}
    }
  }
  printf("\n\tThe root of the equation is %f",x0);
  printf("\n\tThe value of the function is %f",f0);
  return 0;
}
