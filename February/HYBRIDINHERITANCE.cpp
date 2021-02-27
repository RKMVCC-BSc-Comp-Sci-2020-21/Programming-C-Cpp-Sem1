//HYBRID INHERITANCE BY SOUBHAGYA

#include<iostream>

using namespace std;

class A{
	int a;
	public :
		void input();
		void output();
};
class B : public virtual A
{
	int b;
	public :
		void input();
		void output();
};
class C : public virtual A
{
	int c;
	public :
		void input();
		void output();
};
class D : public B, public C{
	int d;
	public:
		void input();
		void output();
};
void A :: input()
{
	cout<<"\n\tEnter the first number : ";
	cin>>a;
}
void A :: output()
{
	cout<<"\n\tFirst number : "<<a;
}
void B :: input()
{
	cout<<"\n\tEnter the second number : ";
	cin>>b;
}
void B :: output()
{
	cout<<"\n\tSecond number : "<<b;
}
void C :: input()
{
	cout<<"\n\tEnter the third number : ";
	cin>>c;
}
void C :: output()
{
	cout<<"\n\tThird number : "<<c;
}
void D :: input()
{
	cout<<"\n\tEnter the fourth number : ";
	cin>>d;
}
void D :: output()
{
	cout<<"\n\tFourth number : "<<d;
}
int main()
{
	D obj;
	
	obj.A::input();
	obj.B::input();
	obj.C::input();
	obj.input();
	
	obj.A::output();
	obj.B::output();
	obj.C::output();
	obj.output();
	return 0;
}
