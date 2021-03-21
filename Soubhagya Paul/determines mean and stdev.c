/*3.Write a C/C++ program using function that determines mean and stdev values of a given array.*/

#include <stdio.h>
#include <math.h>
#define SIZE 5

int main()
{
    int i;
    float arr[SIZE];
	float cal(float []);
    
    for (i = 0; i <SIZE;i++)
	{
		printf("Enter into index elements %d : ",i);    
		scanf("%f", &arr[i]);

	}
    printf("\n\tStandard Deviation = %.6f", cal(arr));
    return 0;
}

float cal(float arr[])
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i <SIZE; ++i) 
	{
        sum= sum+ arr[i];
    }
    mean = sum / 10;
    printf("\n\tThe mean of the array is : %f",mean);
    for (i = 0; i < 10; i++)
        SD += pow(arr[i] - mean, 2);
    return sqrt(SD / 10);
}
