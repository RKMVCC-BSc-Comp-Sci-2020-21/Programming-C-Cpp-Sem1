//CODED BY SUMIT SAHA . STUDENT OF RKMVCC.
#include <iostream>
using namespace std;
void  matrixmultiply(int arr[][3], int arr1[][3],int size,int arr3[][3] )
{
int i,j,h;
   for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
           *(*(arr3+i)+j)=0;
            for(h=0;h<size;h++)
            {
           *(*(arr3+i)+j)+= *((*arr+i)+h) * *(*(arr1+h)+j)  ;
            }
        }
    }
}
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE MATRIX"<<endl;
    cin>>size;
    int arr[size][3];
    int i,j;
    cout<<"ENTER THE ELEMENTS ARRAY 1"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>*(*(arr+i)+j);
        }
    }
   int arr1[size][3];
    cout<<"ENTER THE ELEMENTS ARRAY 2"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>*(*(arr1+i)+j);
        }
    }
    int arr3[size][3];
     matrixmultiply(arr,arr1,size,arr3);
     cout<<"THE MULTIPLIED MATRIX IN ARR 3"<<endl;
     for(i=0;i<size;i++)
     {
         for(j=0;j<size;j++)
         {
            cout<<*(*(arr3+i)+j)<<"  ";
         }
         cout<<endl;
     }
    return 0;
}
