//WAP using functions that return the minimum value and its index among the first n elements of the given array

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int FindMin(int x, int arr[])
{
    int  min=100;
    for(int i=0; i<x; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int FindMinIndex(int x, int arr[])
{
    int i=0, min=FindMin(x, arr);

    for(i=0; i<x; i++)
    {
        if(arr[i]==min)
            return i;
    }
    return i;
}

int main()
{
    int arr[10], n, ind;
    srand(time(0));

    for(int i=0; i<10; i++)
        arr[i] = rand()%100;

    cout<<"Enter a value between 1 and 10 --> ";
    cin>>n;

    system("CLS");

    cout<<"\nArray = {"<<arr[0];
    for(int i=1; i<10; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";
    cout<<"\n\nThe least value among the first "<<n<<" elements of the array is = "<<FindMin(n, arr);

    ind = FindMinIndex(n, arr) + 1;

    cout<<"\n\nIt is the "<<ind;
    switch(ind)
    {
        case 1: cout<<"st "; break;
        case 2: cout<<"nd "; break;
        case 3: cout<<"rd "; break;
       default: cout<<"th "; break;
    }
    cout<<"element of the Array. ";

    cout<<"\n\n\n";
	return 0;
}
