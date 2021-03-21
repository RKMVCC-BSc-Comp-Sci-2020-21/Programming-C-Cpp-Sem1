//8. Write a C/C++ program that uses a for loop to compute and prints the sum of a given number of squares.

#include<iostream>
#define SIZE 5
#include<math.h>
using namespace std;
int main()
{
  int i, sum=0,j;
  int arr[SIZE];

  for(i=0;i<SIZE;i++)
  {
    cout<<"\n\tEnter into index"<<i<<" : ";
    cin>>arr[i];
  }
  for(i=0;i<SIZE;i++)
  {
    arr[j]=arr[i]*arr[i];

    sum=sum+arr[j];
  }
  cout<<"the sum is :"<<sum;
  return 0;
  cout<<"\n\n\n\t\tBY Soubhagya Paul";
}
