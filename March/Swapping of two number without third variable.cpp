#include<iostream>
using namespace std;
int main()
  {
    int a=10,b=20;
    cout<<"Before swapping a="<<a<<" and b="<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping a="<<a<<" and b="<<b<<"\n";    
  }
