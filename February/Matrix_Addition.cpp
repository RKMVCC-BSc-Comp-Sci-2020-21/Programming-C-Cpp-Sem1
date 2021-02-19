#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    cout<<"PERFORMING THE ADDITION OF THE TWO MATRICES"<<endl;
    cout<<"ENTER THE NUMBER OF THE ROWS AND COLOUMS THAT YOU WANT TO ENTER"<<endl;
    cin>>a;
    cout<<"ENTER THE ELEMENTS OF THE FIRST MATRICES"<<endl;
    int i,j;
    int arr[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"ENTER THE ELEMENTS OF THE SECOND MATRICES"<<endl;
    int arr1[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            cin>>arr1[i][j];
        }
    }
    d=0;
    cout<<"PRINTING THE ADDITION OF THE TWO MATRICES"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            d=arr[i][j]+arr1[i][j]+d;
        }
        cout<<d<<endl;
        d=0;
    }
    return 0;
}
