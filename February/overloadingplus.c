//overloading the binary + operator (which takes two operands)
//BY SOUBHGAYA PAUL
#include<iostream>
using namespace std;

class Distance 
{
	int ft,inch;
	public:
		Distance();
		Distance(int, int);
		void output();
		Distance operator +(Distance &);	// OPERATOR OVERLOADING FUNCTION  	
};
Distance :: Distance()
{
	ft=0;
	inch=0;
}
Distance :: Distance(int f, int i)	//PARAMETERIZED CONSTRUCTOR 
{
	ft=f;
	inch=i;
}
Distance Distance :: operator +(Distance &d2)
{
	Distance d3;
	d3.ft= ft+d2.ft;
	d3.inch= inch +d2.inch;
	if(d3.inch >=12)
	{
		d3.ft = d3.ft+(d3.inch/12);
		d3.inch= d3.inch% 12;
	}
	return d3;
}
void Distance :: output()
{
	cout<<"\n\tTotal distance is "<<ft<<" feet "<<inch<<" inch";
} 
int main()
{
	Distance d1(4,11),d2(3,7),d3;

	d3=d1+d2;		// imagine d3= d1. +(d2)
	d3.output();	
	return 0;
}
