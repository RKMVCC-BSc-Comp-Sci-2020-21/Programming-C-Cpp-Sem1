#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
    cin>>size;
    int mid=0,low,high,i,j,k,l=0;
    int arr[size];
    cout<<"ENTER THE ELEMENTS THAT IS NEED TO BE PRESENT IN THE ARRAY"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int p;
    cout<<"ENTER THE ELEMENT IN THE ARRAY THAT YOU WANT TO SEARCH"<<endl;
    cin>>p;
   for(i=0;i<size-1;i++)
    {
      for(j=i+1;j<size;j++)
      {
          if(arr[i]>arr[j])
          {
              k=arr[i];
              arr[i]=arr[j];
              arr[j]=k;
          }
      }
   }
    bool found=true;
   low=0;
   l=0;
   high=size-1;
   while (found==true && low<=high)
   {
      mid=(low+high)/2;
      if(arr[mid]==p)
      {
          found=false;
          l=1;
          break;
      }
      else if (arr[mid]>p)
          high=mid-1;
      else
          low=mid+1;
   }
   if(arr[mid]==p)
       cout<<"THE NUMBER THAT YOU ARE SEARCHINNG FOR HAS BEEN FOUND"<<endl;
       else
       cout << "THE NUMBER YOU ARE SEARCHING FOR HAS NOT BEEN FOUND "<<endl;
    return 0;
}
