#include<iostream>
#include<string>


using namespace std;
struct student
{
    int roll;
    string name;
    float avg;
};

int main()
{
    student s1;
    student *s = &s1;
    cout<<"Enter roll ";
    cin>>s->roll;
    fflush(stdin);

    cout<<"Enter name: ";
    getline(cin,s1.name);

    cout<<"Enter average marks: ";
    cin>>s->avg;

    cout<<"Roll: "<<s->roll<<endl;
    cout<<"Name: "<<s->name<<endl;
    cout<<"Average: "<<s->avg<<endl;

    return 0;


}
