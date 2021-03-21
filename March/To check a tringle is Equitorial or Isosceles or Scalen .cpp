//To check a tringle is Equitorial or Isosceles or Scalen 

#include<iostream>

using namespace std;

int main()
{
	int side1,side2,side3;
	cout<<"Please enter 3 sides of the tringle : ";
	cin>>side1>>side2>>side3;
	
	
	if ( side1 == side2 && side2==side3 )
		cout<<"The tringle is Equitorial ";
		
	else if (side1 == side2 || side2 == side3 || side3 == side1)	
		cout<<"The tringle is Isosceles ";
		
	else
		cout<<"The tringle is Scalen ";
		
	
	return 0;		
}
