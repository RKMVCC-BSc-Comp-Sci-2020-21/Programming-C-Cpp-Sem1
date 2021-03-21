#include "header.h"

void printVars()
{
	printf("num1 = %d\n", ++num1);
	//printf("num2 = %d\n", ++num2); //Uncomment this statement to see the error - you cannot access a static variable from another file
}