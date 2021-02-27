#include<iostream>
using namespace std;
class Student
{
    int roll;
    int marks;
    char name[20];
public:
    void put();
    void in();
};

void Student ::in()
{
    cout<<"Enter the Name - ";
    cin>>name;
    cout<<"Enter the roll no - ";
    cin>>roll;
    cout<<"Enter the marks - ";
    cin>>marks;
}
void Student :: put()
{
    cout<<"The name of the student is = "<<name<<endl;
    cout<<"The roll of the student is = "<<roll<<endl;
    cout<<"The marks of the student is = "<<marks<<endl;

}

int main()
{

   Student s;
    s.in();
    s.put();
    return 0;
}
