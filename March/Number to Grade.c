//No to grade

#include<stdio.h>
int main()

{
	int a ;
	printf("Enter any number : ");
	scanf("%d", &a );
	
	switch(a)
	{
		case (0 - 50):
			printf("\n Fair grade ");
			break;
			
			
			
		case (51-70):
			printf("\n C grade ");
			break;
			
		case (71-85):
			printf("\n B grade ");
			break;
			
		case (85-100):
			printf("\n A grade ");
			break;		
		
	}
	return 0;
}
