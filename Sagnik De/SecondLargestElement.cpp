// WAP to print the second largest number in an array

#include <iostream>
using namespace std;

int main()
{
    int max1=0, max2=0, arr[5], i;

    cout<<"Enter 5 numbers :"<<endl;
    for(i=0; i<5; i++)
        cin>>arr[i];

    for(i=0; i<5; i++)
    {
        if(arr[i]>max1)
            max1=arr[i];
    }

    for(i=0; i<5; i++)
    {
        if((arr[i]>max2)&&(arr[i]!=max1))
            max2=arr[i];
    }

    cout<<"\nSecond Largest Number in the Array : "<<max2;

    cout<<"\n\n";
    return 0;
}
