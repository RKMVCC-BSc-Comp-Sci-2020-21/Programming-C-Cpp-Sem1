#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char name[20];
	float sal;
	ofstream a_file("Employee");
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the name of the employee "<<i+1;
		cin>>name;
		cout<<"Enter the salary: ";
		cin>>sal;
		a_file<<"\n"<<name<<"\t"<<sal;
	}
	a_file.close();
	ifstream b_file("Employee");
	for(int i=0;i<3;i++)
	{
		b_file>>name;
		b_file>>sal;
		cout<<"\n Employee "<<i+1<<" : ";
		cout<<name<<"\t"<<sal;
	}
	b_file.close();
	return 0;
	
	
}
