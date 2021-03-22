/*
	parameterized construtor:
	---------------------------
	when we pass the argument in the constructor then that type
	of constructor is called parameterized constructor.
*/
#include<iostream>
#include<math.h>
using namespace std;
class Number
{
private:
	int n1,n2;
public:
	Number()  // default constructor
	{
		n1=2; n2=3;
	}
	Number(int p,int q)  // parameterized Constructor
	{
		n1=p;
		n2=q;
	}
	void show()
	{
		cout<<" the power result is "<<pow(n1,n2)<<endl;
	}
};
int main()
	{
	Number no;  // object creation , default constructor
	Number po(4,3); //object creation , parameterized constructor
	no.show();
	po.show();
	return 0;
	}

/*
	characteristics of the constructor:
	------------------------------------
	1. constructor should be in the public section.
	2. the constructor name is the same as the class name.
	3. they are automatically invoked when objects are created.
	4. constructor can't be inherited.
	5. constructor can not be virtual.
	6. if constructor does not take any argument then they are called
	   default constructor.
	7. constructor can take argument. that is called parameterized
	   constructor.
	8. constructor does not return any value.
	9. we can not refer to their address.
*/

/*
	in c++ like OOPL , one class can contain more than one constructor.
	on which one is default constructor, and others are parameterized
	constructor. present of more than one constructor in a class is
	called constructor overloading. And the constructors are called
	overloaded constructor.
*/
