#include<iostream>
using namespace std;
int main()
{
    int a,c,e,g,h,i,j;
    cout<<"ENTER THE NUMBER THAT YOU WANT TO CONVERT FROM DECIMAL INTO BINARY"<<endl;
    cin>>a;
     cout<<endl;
     int arr[100];
     g=a;
     h=0;
     e=0;
     while(g>0)
     {
         c=g%2;
         arr[h]=c;
         h++;
         e++;
         g=g/2;
         }
    cout<<"HERE IS THE THAT IS CONVERTED FROM DECIMAL INTO THE BINARY"<<endl;

     for(i=e-1;i>=0;i--)

     {
         cout<<arr[i]<<" ";
     }
    return 0;
}
