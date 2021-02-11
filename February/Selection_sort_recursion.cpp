#include <iostream>
using namespace std ;

int selection_sort(int arr [],int size,int j,int p,int);

int main ()
{
    int i,j,a,b,c,size;
    cout<<"ENTER THE NUMBER OF ELEMENTS THAT YOU WANT TO KEEP IN THE ARRAY"<<endl;
    cin>>size;
    int arr[size];
    int arr1[size+1];
    //ENTER THE ELEMENTS IN THE ARRAY arr.
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int t=0;

    //THE RETURNED ELEMENT IS BEING STORED IN THE ARRAY .

    for(i=0;i<size-1;i++)
    {
     t=selection_sort(arr,size,i+1,0,i);
     arr1[i]=t;
     }
    arr1[size-1]=arr [size-1];

    //PRINTING THE SORTED ELEMENTS .

    for(i=0;i<size;i++)
    {
      cout<<arr1[i]<<"  ";
    }


    return 0;
}

//PERFORMING THE SELECTION SORT USING THE RECURSIVE TECHNIQUE .

int selection_sort(int arr[],int size,int j,int p,int i)
{
    if (size==j)
        return arr[i];
    else
    {
        if(arr[i]>arr[j])
        {
            p=arr[i];
            arr[i]=arr[j];
            arr[j]=p;
         }
         else
            p=arr[j];
           j++;
         return selection_sort(arr,size,j,p,i);
    }
}
