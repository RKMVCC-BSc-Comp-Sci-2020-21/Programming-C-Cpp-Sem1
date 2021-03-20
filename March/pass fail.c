#include <stdio.h>
int main ()
{
	int B,E,M,G,H,L,P ;
	float T,A;
	printf ("Enter the numbers of all subject :");
	scanf ("%d%d%d%d%d%d%d",&B,&E,&M,&G,&H,&L,&P);
	T=B+E+M+G+H+L+P;
	A=T/7;
	printf ("the total marks is :%f",T);
	printf ("\nthe avg is :%f",A);
	if (A>=90)
	printf ("grade :A+");
	else ("grade :A");
	if (A<=70)
	printf ("grade :B");
	
	if (A>=50)
	printf ("grade :C");
	
	if (A<=25)
	printf ("grade :Fail");
	return 0;
	
}
