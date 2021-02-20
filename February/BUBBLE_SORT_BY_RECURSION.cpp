//CODED BY SUMIT SAHA.STUDENT OF RKMVCC.
//     BUBBLE SORT TECHNIQUE

# include<iostream>
using namespace std ;
int bubblesort(int arr[],int size,int ,int  );
int main()
{
    int a,size,i;
    cout<<"ENTER THE NUMBER OF ELEMENTS THAT YOU WANT TO KEEP IN YOUR ARRAY"<<endl;
    cin>>size;
    int arr [size];
    cout<<"ENTER THE ELEMENTS THAT ARE TO BE PLACED IN THE ARRAY"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<size-1;i++)
    {
       a=bubblesort(arr,size,0,0);
       }
  cout << "THE ARRAY ELEMENTS AFTER THE ARRANGEMENT IN THE ASSCENDING ORDER:- "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}

int bubblesort(int arr[],int size,int j,int p)
{
   if(j==size-1)
    {
      return 0;
    }
    else
    {
        if(arr[j]>arr[j+1])
        {
            p=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=p;
        }
        j++;
        return bubblesort(arr,size,j,p);
    }
}

