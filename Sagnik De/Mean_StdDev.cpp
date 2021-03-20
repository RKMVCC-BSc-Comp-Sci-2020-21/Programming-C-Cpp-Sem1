//WAP using a function that returns the minimum value among the first n elements of the given array

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

double FindMean(int arr[])
{
    double sum=0.0;

    for(int i=0; i<30; i++)
        sum+=arr[i];

    return (sum/30);
}

double FindSD(int arr[])
{
    double sum=0.0;
    double mean = FindMean(arr);

    for(int i=0; i<30; i++)
        sum+= pow((arr[i]-mean),2);
    sum/=30;

    return (sqrt(sum));
}

int main()
{
    int arr[30];
    srand(time(0));

    for(int i=0; i<30; i++)
        arr[i] = rand()%100;

    cout<<"\nArray = {"<<arr[0];
    for(int i=1; i<30; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";

    cout<<"\nThe Mean of the values = "<<FindMean(arr);
    cout<<"\nThe Standard Deviation = "<<FindSD(arr);

    cout<<"\n\n\n";
	return 0;
}
