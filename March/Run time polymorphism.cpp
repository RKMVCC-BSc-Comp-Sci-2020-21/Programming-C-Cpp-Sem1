//By Pankaj Sadhukhan...
//Run time ploymorphism using virtual function

#include<iostream>
using namespace std;

class person
{
public:
    char name[10];
    int age;
public:
    virtual void create()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
    }
    virtual void display()
    {
        cout<<"The name of the person is: "<<name<<"\n";
        cout<<"The age of the person  is: "<<age<<"\n";
    }

};
class teacher:public person
{
public:
        void display()
        {

            cout<<"He is a teacher"<<"\n";
        }

};
class student:public person
{
public:
    void display()
    {
        cout<<"He is a student"<<"\n";
    }
};
int main()
{
    person p1,p2,*b;
    teacher t;
    student s;
    b=&p1;
    b->create();
    b->display();
    b=&t;
    b->display();
    b=&p2;
    b->create();
    b->display();
    b=&s;
    b->display();

    return 0;
}









