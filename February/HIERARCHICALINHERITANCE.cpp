//HIERARCHICAL INHERITANCE by SOUBHAGYA PAUL
#include<iostream>

using namespace std;

class A{
	int a;
	public :
		A(int a1)	//PARAMETERIZED CONSTRUCTOR
		{
			a=a1;
		}
		void output();
};
class B : public A
{
	int b;
	public :
		B(int a1, int b1) : A(a1)	//PARAMETERIZED CONSTRUCTOR
		{
			b=b1;
		}
		void output();
};
class C : public A
{
	int c;
	public :
		C(int a1, int c1) : A(a1)
		{
			c=c1;	
		}
		void output();
};
void A :: output()
{
	cout<<"\n\tFirst number : "<<a;
}
void B :: output()
{
	cout<<"\n\tSecond number : "<<b;
}
void C :: output()
{
	cout<<"\n\tThird number : "<<c;
}
int main()
{
	B objB (10,20);
	C objC (100,200);
	cout<<"\n\n\tobject B ";
	objB.A::output();
	objB.output();	
	cout<<"\n\n\tobject C ";
	objC.A::output();
	objC.output();
	return 0;
}
