#include<iostream>

using namespace std;
















/*#include<iostream>

using namespace std;
class A{
	int a;
	protected:
		void inputA();
		void outputA();
		
};
class B : protected A{
	int b;
	public :
		void inputB();
		void outputB();
		
};
void A :: inputA()
{
	cout<<"\n\tEnter the first number : ";
	cin>>a;
}
void A :: outputA()
{
	cout<<"\n\tYou entered : "<<a;
}
void B :: inputB()
{
	inputA();
	cout<<"\n\tEnter the second number : ";
	cin>>b;
}
void B :: outputB()
{
	outputA();
	cout<<"\n\tYou entered : "<<b;
}
int main()
{
	B obj;
	
	obj.inputB();
	obj.outputB();
	
	return 0;
}
*/
/*#include<iostream>

using namespace std;

class A{
	int a;
	public:
		void inputA();
		void outputA();
		
};
class B : private A{
	int b;
	public :
		void inputB();
		void outputB();
		
};
void A :: inputA()
{
	cout<<"\n\tEnter the first number : ";
	cin>>a;
}
void A :: outputA()
{
	cout<<"\n\tYou entered : "<<a;
}
void B :: inputB()
{
	inputA();
	cout<<"\n\tEnter the second number : ";
	cin>>b;
}
void B :: outputB()
{
	outputA();
	cout<<"\n\tYou entered : "<<b;
}
int main()
{
	B obj;
	
	obj.inputB();
	obj.outputB();
}
*/
/*#include<iostream>

using namespace std;

class A{
	int a;
	public:
		void inputA();
		void outputA();
		
};
class B : public A
{
	int b;
	public:
		void inputB();
		void outputB();
};
void A :: inputA()
{
	cout<<"\n\tEnter the first number : ";
	cin>>a;
	
}
void A :: outputA()
{
	cout<<"\n\tYou entered the number : "<<a;
}
void B :: inputB()
{
	cout<<"\n\tEnter the second number : ";
	cin>>b;
	
}
void B :: outputB()
{
	cout<<"\n\n\tYou entered the number : "<<b;
}
int main()
{
	B obj;
	
	obj.inputA();
	obj.inputB();
	obj.outputA();
	obj.outputB();
	
	return 0;
}
*/

/*#include<iostream>

using namespace std;

class B;
class A{
	int a;
	public :
		A(int a1)
		{
			a=a1;
			
		}
		friend void add(A& , B&);
		
};
class B{
	int b;
	public:
	B (int b1)
	{
		b=b1;	
	}
	friend void add(A& , B&);
	
};
void add(A &objA , B &objB)
{
	int c;
	c= objA.a+ objB.b;
	cout<<"\n\tThe sum of "<<objA.a <<" and "<<objB.b<<" is : "<<c;
	
}
int main ()
{
	A objA(10);
	B objB(20);
	
	add(objA, objB);
	
	return 0;
}
*/

