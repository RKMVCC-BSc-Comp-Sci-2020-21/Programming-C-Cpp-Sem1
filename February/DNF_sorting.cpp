//CODED BY SUMIT SAHA.STUDENT OF RKMVCC.
//DNF SORTING.
//PROGRAM:-6
//PROGRAM CODE:-
#include<iostream>

using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"ENTER THE NUMBER OF THE ARRAY ELEMENTS YOU WANT TO ENTER"<<endl;
    cout<<"NOTE THE ELEMENT IN THE ARRAY SHOULD ONLY CONTAIN THE THREE ELEMENTS 0,1,2"<<endl;
    cin>>a;
    int arr[a];
    cout<<"ENTER THE ARRAY ELEMENTS SATISFYING THE ABOVE CONDITIONS"<<endl;
       for(b=0;b<a;b++)
           {
               cin>>arr[b];
                   }
       int mid,high,low;
       low=0;
       high=a-1;
       mid=0;
       int p=a;
    while(mid!=high)
    {
        if(arr[mid]==0)
        {
            e=arr[mid];
            arr[mid]=arr[low];
            arr[low]=e;
           low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            f=arr[mid];
            arr[mid]=arr[high];
            arr[high]=f;
            high--;
            //mid++;
        }
        p--;
    }
    if(mid==high)
    {

        if(arr[mid]==0)
        {
            e=arr[mid];
            arr[mid]=arr[low];
            arr[low]=e;
           low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            f=arr[mid];
            arr[mid]=arr[high];
            arr[high]=f;
            high--;
            //mid++;
        }
    }
    cout<<"THE ARRAY AFTER THE DNF SORT IS"<<endl;
    for(b=0;b<a;b++)
    {
        cout<<arr[b]<<"  ";
    }
    return 0;
}
