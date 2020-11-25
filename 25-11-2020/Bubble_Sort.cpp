//Bubble Sort Program in C++
#include<iostream>
using namespace std;

class sort{								
public:
void bubble_sort(int arr[], int n)
{
    double total;
    int i=0,j=0,x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j+1]<arr[j])
            {
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
    cout<<"After Sorting: ";
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}};

int main()
{
    sort sr;
    int arr[80],i=0,n,t;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    sr.bubble_sort(arr,n);
    return 0;
}
