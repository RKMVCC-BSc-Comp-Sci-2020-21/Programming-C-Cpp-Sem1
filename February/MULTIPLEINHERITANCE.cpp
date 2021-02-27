//MULTIPLE INHERITANCE
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
class B{
	int b;
	public :
		B(int b1)	//PARAMETERIZED CONSTRUCTOR
		{
			b=b1;
		}
		void output();
};
class C : public A, public B{
	int c;
	public:
		C(int a1, int b1, int c1) : A(a1),B(b1)
		//LINKING THE DERIVED CLASS CONSTRUCTOR TO THAT OF THE BASE CLASSES
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
	C obj(100, 200, 300);
	
	obj.A::output();
	obj.B::output();	
	obj.output();
	return 0;
}
