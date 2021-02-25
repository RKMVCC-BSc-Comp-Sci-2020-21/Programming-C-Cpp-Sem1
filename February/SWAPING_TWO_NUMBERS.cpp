#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int temp;

cout<<"Enter 1st number :";
cin>>x;
cout<<"Enter 2st number :";
cin>>y;

temp=x;
x=y;
y=temp;
cout<<"Swapped number :"<<x<<","<<y<<"\n";
return 0;

}

