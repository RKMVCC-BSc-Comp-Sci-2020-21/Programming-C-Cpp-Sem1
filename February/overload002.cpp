//we can overload ++ by changing their signature BY SOUBHAGYA PAUL
#include<iostream>
using namespace std;
class ABC
{
	int a, b, c;
	public :
		ABC(int, int, int);
		void operator ++();
		void operator ++(int);
		void output();
};

ABC :: ABC(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}

void ABC :: operator ++()
{
	a++;
	b++;
	c++;
}

void ABC :: operator ++(int n)  	// DUMMY ARGUMENT
//THE ARGUMENT IS ONLY TO MAKE THE FUNCTION SIGNTURE CHANGE , IT WILL NEVER BE USED 
{
	++a;
	++b;
	++c;
}

void ABC :: output()
{
	cout<<"\n\n\tA : "<<a;
	cout<<"\n\tB : "<<b;
	cout<<"\n\tC : "<<c;
}

int main(void)
{
	ABC obj(10, 20, 30);
	cout<<"\n\n\n\tBefore Increment : ";
	obj.output();
	obj++;  		// IMAGINE obj.++();
	cout<<"\n\n\n\tAfter Post Increment : ";
	obj.output();
	++obj;	  	// IMAGINE obj.++();
	cout<<"\n\n\n\tAfter Pre Increment : ";
	obj.output();
  return 0;
}
