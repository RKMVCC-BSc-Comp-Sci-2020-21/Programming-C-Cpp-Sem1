//WAP using a function that returns the minimum and maximum value of the given array using reference parameters

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void Func(int &min, int &max, int (&arr)[10])
{
    for(int i=0; i<10; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    for(int i=0; i<10; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

}

int main()
{
    int arr[10], a=100, b=0;
    srand(time(0));

    for(int i=0; i<10; i++)
        arr[i] = rand()%100;

    cout<<"\nArray = {"<<arr[0];
    for(int i=1; i<10; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";

    Func(a, b, arr);

    cout<<"\nThe minimum value of the array is = "<<a;
    cout<<"\nThe maximum value of the array is = "<<b;

    cout<<"\n\n\n";
	return 0;
}
