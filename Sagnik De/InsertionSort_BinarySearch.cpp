//WAP using functions that implement Insertion Sort and Binary Search algorithm

#include <iostream>
#include <ctime>
using namespace std;

int arr[25];

void InsertionSort()
{
    int i, j, key;

    for (i = 1; i < 25; i++)
    {
        key = arr[i];
        j = i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

bool BinarySearch(int key)
{
    int ul=24, ll=0, mid;
    while(ll<=ul)
    {
        mid = (ll+ul)/2;
        if (arr[mid]==key)
            return true;
        else if (arr[mid]<key)
            ll = mid+1;
        else
            ul = mid-1;
    }
    return false;
}

int main()
{
    int x;
    srand(time(0));

    for(int i=0; i<25; i++)
        arr[i] = rand()%100;

    cout<<"\nOriginal Array = {"<<arr[0];
    for(int i=1; i<25; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";

    InsertionSort();

    cout<<"\nSorted Array = {"<<arr[0];
    for(int i=1; i<25; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";

    cout<<"\nEnter the value to be searched = ";
    cin>>x;

    (BinarySearch(x)) ? cout<<"\n\tThe value is present!" : cout<<"\n\tThe value is not present!";

    cout<<"\n\n\n";
	return 0;
}
