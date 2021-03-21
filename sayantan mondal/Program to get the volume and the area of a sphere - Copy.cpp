// Program to get the volume and the area of a sphere //

#include<iostream>
using namespace std;

#define pie 3.141

struct shere{
	double radious;
}s;
int main(){
	
	cout<<"Enter the radious of the sphere"<<endl;
	cin>> s.radious;
	
	double area = 4 * pie * s.radious * s.radious;
	double volume = (4/3) * pie * s.radious * s.radious * s.radious;
	
	cout<<"Area of sphere is"<<area<<endl;
	cout<<"Volume of the sphere is"<<volume<<endl;
	
	return 0;
}
