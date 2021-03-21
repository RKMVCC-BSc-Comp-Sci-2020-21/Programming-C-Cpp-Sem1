#include<iostream>
#include<string.h>
using namespace std;
class studentinfo
{
private:
	int sid;
	char snm[20], scr[20];
	double sfees;
public:
	studentinfo()
	{
	sid=1;
	strcpy(snm,"sujay");
	strcpy(scr,"computer");
	sfees=1200.50;
	}
void show()
	{
	cout<<"Student Id:"<<sid<<endl;
	cout<<"Student Name:"<<snm<<endl;
	cout<<"Student Course:"<<scr<<endl;
	cout<<"Student Fees:"<<sfees;
	}
};
int main()
	{
	studentinfo s;
	s.show();
	return 0;
	}

/*
	characteristics of the constructor:
	------------------------------------
	1. constructor should be in the public section.
	2. the constructor name is the same as the class name.
	3. they are automatically invoked when objects are created.
	4. constructor can't be inherited.
	5. constructor can not be virtual.
	6. if constructor does not take any argument then they are called
	   default constructor.
	7. constructor can take argument. that is called parameterized
	   constructor.
	8. constructor does not return any value.
	9. we can not refer to their address.
*/
