/*multiply of numbers*/
#include<iostream>
using namespace std;
int mulnum(int x,int y);
int mulnum(int x,int y)
{
	int c;
	c=x*y;
	return c;
}
int main()
{
    int a,b;
    cout<<"--------Multiplication--------";
    cout<<"\n\tEnter First Number: ";
    cin>>a;
    cout<<"\n\tEnter Second Number: ";
    cin>>b;
    cout<<"\n\tThe result is "<<mulnum(a,b);
    return 0;
}
	
