//overloading <,>,==
#include<iostream>
using namespace std;
class Distance
{
	int ft,inch;
	public:
		Distance();
		Distance(int , int );
		int operator <(Distance &);
		int operator >(Distance &);
		int operator ==(Distance &);					
};
Distance :: Distance()
{
	ft=0;
	inch=0;
}
Distance :: Distance (int f , int i)
{
	ft=f;
	inch=i;
}
int Distance :: operator <(Distance &d2)
{
	int i1,i2;	
	i1= ft*12 + inch;
	i2= d2.ft*12 + d2.inch;
	
	if(i1<i2)
		return 1;
	else
		return 0;
}
int Distance :: operator >(Distance &d2)
{
	int i1,i2;
	
	i1= ft*12 + inch;
	i2= d2.ft*12+d2.inch;
	
	if(i1>i2)
		return 1;
	else
		return 0;
}
int Distance :: operator ==(Distance &d2)
{	
	int i1,i2;
	
	i1= ft*12 + inch;
	i2=d2.ft*12 + d2.inch;
	
	if (i1==i2)
		return 1;
	else
		return 0;
}
int main()
{
	
	Distance d1(4,7),d2(9,7);
	
	if(d1>d2)	//IMAGINE d1 . >(d2)
		cout<<"\n\tFirst distance is greater.";
	if(d1<d2)	//IMAGINE d1 . <(d2)
		cout<<"\n\tSecond distance is greater.";
	if(d1==d2)	//IMAGINE d1 . ==(d2)
		cout<<"\n\tTwo distance are equal.";

	return 0;
}
