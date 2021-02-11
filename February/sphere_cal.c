/*Write a C/C++ program using function that returns the volume and the surface area of a sphere with given
radius by SOUBHAGYA PAUL.*/
#include<stdio.h>
int main()
{
	
	float radious;

	void Vol (float);
	void Area(float);

	printf("\n\tEnter the radious of the sphere : ");
	scanf("%f",&radious);

	Vol(radious);
	
	Area(radious);
	
	return 0;
}

void Vol (float radious)
{
	float v;
	v= ((float)4/3)*((float)22/(float)7)*(radious*radious*radious);
	printf("\n\tThe volume of the sphere is %f",v);
}
void Area(float radious)
{
	float a;
	a= (float)22/7 *radious*radious;
	printf("\n\tThe Area of the sphere is : %f",a);    
}
