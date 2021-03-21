#include<iostream>
using namespace std;
class employee
{
	private:
		char name[30];
		int id;
		float salary;
		char dept[60];
		float da;
		float ta;
		float gross;
	public:
		void getdata()
		{
			cout<<"\n\nEnter the name of the employee : ";
			cin>>name;
			cout<<"\n\nEnter the id of the employee : ";
			cin>>id;
			cout<<"\n\nEnter the department :  ";
			cin>>dept;
			cout<<"\n\nEnter the salary of the employee : ";
			cin>>salary;
			cout<<"\n\nEnter the da : ";
			cin>>da;
			cout<<"\n\nEnter the ta : ";
			cin>>ta;
		}
		void showdata()
		{
			da=(salary*da)/100;
			ta=(salary*ta)/100;
			gross=da+ta+salary;
			cout<<"\n\nEmployee name is :  "<<name;
			cout<<"\n\nEmployee id is : "<<id;
			cout<<"\n\nSalary of the employee is : "<<salary;
			cout<<"\n\n Department of the employee is : "<<dept;
			cout<<"\n\nDa of the employee is : "<<da;
			cout<<"\n\nTA of the employee is : "<<ta;
			cout<<"\n\nGross of the employee is : "<<gross;
		}
};
int main()
{
	employee obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
