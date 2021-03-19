#include<iostream>
using namespace std;
int main()
{
int b,p,f=1;
cout<<"Enter base\n";
cin>>b;
cout<<"Enter power\n";
cin>>p;
  for(int i=1;i<=p;i++)
  {
    f=f*b;	
  }	
 cout<<"Result="<<f; 
}
