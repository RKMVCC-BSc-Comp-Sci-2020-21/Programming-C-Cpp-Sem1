// C or C++ Program to Find All Roots of a Quadratic Equation

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, discriminant, root1, root2, realPart, imagPart;

	printf("\n\tEnter coefficients : a, b and c: ");
	printf("\n\t\tEnter the value of a : ");
	scanf("%f", &a);
	printf("\n\t\tEnter the value of b : ");
	scanf("%f", &b);
	printf("\n\t\tEnter the value of c : ");
	scanf("%f", &c);

	discriminant = b * b - 4.0 * a * c;


	if (discriminant > 0)  // CONDITION FOR REAL AND DIFFERENT ROOTS
	{
		root1 = (-b + sqrt(discriminant)) / (2.0 * a);
		root2 = (-b - sqrt(discriminant)) / (2.0 * a);
		printf("\n\tRoot1 = %f and Root2 = %f", root1, root2);
	}
	else if (discriminant == 0)  // CONDITION FOR REAL AND EQUAL ROOTS
	{
		root1 = root2 = -b / (2.0 * a);
		printf("\n\troot1 = root2 = %f", root1);
	}
	else  // IF ROOTS ARE NOT REAL
	{
		realPart = -b / (2.0 * a);
		imagPart = sqrt(-discriminant) / (2.0 * a);
		printf("\n\troot1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
	}

return 0;
}

