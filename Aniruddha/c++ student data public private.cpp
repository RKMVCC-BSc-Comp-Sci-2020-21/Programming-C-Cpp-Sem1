#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		char name[20];
		
	public:
		void getdata()
		{
			cout<<"Enter the roll number of the student  :    ";
			cin>>roll;
			cout<<"Enter the student name  :     ";
			cin>>name;
			
		}
		void showdata()
		{
			cout<<"\n\nRoll number of the student is   "<<roll;
			cout<<"\n\nName of the student is    "<<name;
		}
};
    int main()
    {
    	student obj;
    	obj.getdata();
    	obj.showdata();
    	return 0;
    
	}
