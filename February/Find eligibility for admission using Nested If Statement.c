#include<stdio.h>

int main()
{
	int p,c,m;
	
	printf("Eligibility  Criteria:\n");
	printf("Marks in Math>=65\n");
	printf("and Marks in physics>=55\n");
	printf("and Marks in Chemistry>=50\n");
	printf("and Total in all three subjects>=190\n");
	printf("or Total in maths and Physics>=140\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("Input the Marks obtain in Math: ");
	scanf("%d",&m);
	
	printf("Input the Marks obtain in Physics: ");
	scanf("%d",&p);
	
	printf("Input the Marks obtain in Chemistry: ");
	scanf("%d",&c);
	
	printf("Total marks of Math,physics and chemistry: %d\n",m+p+c);
	printf("Total marks of Math,physics: %d\n",m+p);
	
	if(m>=65)
	    if(p>=55)
	        if(c>=50)
	        if((m+p+c)>=190||(m+p)>=140)
	           printf("The candidate is eligible for addmission.\n");
	        else
			   printf("The candidate is not eligible for addmission.\n");
			   else
			printf("The candidate is not eligible for addimission.\n");
		else
		printf("The candidate is not eligible for addimission.\n");
	else
	printf("The candidate is not eligible for addimission.\n");
} 
	
	
	
	
