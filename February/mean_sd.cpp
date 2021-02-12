#include <iostream>
#include<cmath>
using namespace  std;

double mean(int arr[],int);
double sd(int arr[],int,int );

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    double m,sdev;
    m=mean(arr,n);
    cout<<"Mean of the given array is: "<<m<<endl;
    sdev=sd(arr,m,n);
    cout<<"Standard deviation of the given array is: "<<sdev<<endl<<endl;
    return 0;
}

double mean(int arr[],int n)
{
    double s=0;
    for(int i=0;i<=5;i++)
    {
        s+=arr[i];
    }
    return (s/n);

}
double sd(int arr[],int m,int n)
{
    double diff=0,sdev;
    for(int i=0;i<=5;i++)
    {
        diff+= pow((arr[i]-m),2);
    }
    sdev=sqrt((diff/n));
    return sdev;
}
