#include<stdio.h>

typedef struct
{
	int ft,inch;

}distance;

int main()
{
	distance d1,d2,d3;
	distance add(distance,distance);	//LIKE int add(int, int)

	printf("\n\tEnter first distance : ");
	printf("\n\t\tFeet : ");
	scanf("%d",&d1.ft);
	printf("\n\tInches : ");
	scanf("%d",&d1.inch);

	printf("\n\tEnter second distance : ");
	printf("\n\tFeet : ");
	scanf("%d",&d2.ft);
	printf("\n\tInches : ");
	scanf("%d",&d2.inch);

	d3=add(d1, d2);
	printf("\n\tThe added distance is %d feet %d inches.",d3.ft,d3.inch);

	return 0;
}

distance add(distance d1, distance d2)
{
	distance d3;

	d3.ft= d1.ft+ d2.ft;
	d3.inch=d1.inch+d2.inch;

	if(d3.inch>=12)
	{
		d3.ft= d3.ft + (d3.inch/12);
		d3.inch= d3.inch%12;
	}
	return d3;
}
