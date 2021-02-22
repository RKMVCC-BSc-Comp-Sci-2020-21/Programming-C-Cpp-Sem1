//Complex number multiplication BY SOUBHAGYA PAUL
#include<iostream>

using namespace std;

class Complex
{
	int real ,imag;
	
	public:
		Complex();
		Complex(int , int);
		Complex operator *(Complex &);
		void output();
			
};
Complex :: Complex ()
{
	real=0;
	imag=0;
}
Complex :: Complex (int r, int i)
{
	real=r;
	imag=i;
}
Complex Complex :: operator *(Complex &c2)
{
	Complex c3;
	c3.real= real*c2.real - imag * c2.imag;
	c3.imag= real*c2.imag + imag * c2.real;
	return c3;
	
}
void Complex :: output()
{
	cout<<"\n\treal   :"<<real;
	cout<<"\n\timaginary :"<<imag;
}
int main()
{
	Complex c1(4,11),c2(3,7),c3;
	c3=c1*c2;	//IMAGINE c3.*(c2) 
	c3.output();
	return 0;
}
