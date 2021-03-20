#include<iostream>
using namespace std;
class complex
{
	//Member Variables
	float real;
	float imag;
	
	//Member Function
	public:
	void getdata()
	{
		cout<<"Enter the Real Value: ";
		cin>>real;
		cout<<"Enter the Imaginary Value: ";
		cin>>imag;
	}
	void display()
	{
		cout<<"The complex Number is: ("<<real<<")+i("<<imag<<")"<<endl;
	}
	complex sum(complex x)
	{
		complex t;
		t.real=real+x.real;
		t.imag=imag+x.imag;
		return t;
	
	}
};

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c3=c1.sum(c2);        //c3=c1+c2;
	c3.display();
	
}
