/*Program to find roots of a quardratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,r1,r2,D,realpart,imgpart;
	printf("Enter co-efficients a,b and c:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("\n The equation is (%.1lf)x^2+(%.1lf)x+(%.1lf)=0",a,b,c);
	D=b*b-4*a*c;
	if(D>0)
	{ r1=(-b+sqrt(D))/(2*a);
	  r2=(-b-sqrt(D))/(2*a);
	printf("\n\tRoot1= %.2lf \n\tRoot2= %.2lf",r1,r2);
	}
	else if(D==0)
	{r1=r2=(-b/(2*a));
	 printf("\n\tRoot1=Root2= %.2lf",r1);
	}
	else{
		realpart=(-b/(2*a));
		imgpart=sqrt(-D)/(2*a);
		printf("\n\tRoot1= %.2lf+%.2lfi",realpart,imgpart);
		printf("\n\tRoot1= %.2lf-%.2lfi",realpart,imgpart);
	}
	return 0;
}/*end of main*/
