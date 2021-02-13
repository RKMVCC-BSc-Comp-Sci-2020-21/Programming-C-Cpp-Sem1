# include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,size;
    cout<<"ENTER THE SIZE OF YOUR MATRIX"<<endl;
    cin>>size;
    int arr[size][size];
    int arr1[size][size];
    int arr2[size][size];
    cout<<"ENTER THE ELMENTS IN THE MATRIX"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
   cout<<"YOUR ENTERED MATRIX IS"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<setw(size)<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"THE MIRROR OF THE MATRIX WITH THE RESPECT TO THE ROWS"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr1[i][j]=arr[size-1-i][j];
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<setw(size)<<arr1[i][j];
        }
        cout<<endl;
    }
    cout<<"THE MIRROR OF THE MATRIX WITH THE RESPECT TO THE COLOUMNS"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr2[i][j]=arr[i][size-1-j];
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<setw(size)<<arr2[i][j];
        }
        cout<<endl;
    }
    return 0;
}
