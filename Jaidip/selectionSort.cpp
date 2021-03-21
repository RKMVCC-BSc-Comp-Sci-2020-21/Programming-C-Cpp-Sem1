#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int n,i,j;
     n=500000;
    int arr[n];
   /* cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    //Input of array
    cout<<"Enter the elements in array"<<endl;
    */
   
    for(i=100000;i<n;i++)
    {
        arr[i]=i+rand();
    }
    //Selection sorting
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    //Display of sorted array
    cout<<"The sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}