#include<iostream>

using namespace std;

int main(){

    int a,b,x,y;

    cout<<"Enter two numbers: ";

    cin>>a>>b;

    x=a;

    y=b;

    while(a!=b){

        if(a>b){

           a=a-b;

        }else{

           b=b-a;

        }
    }

    cout<<"HCF/GCD of the given numbers is : "<<a<<endl;

    cout<<"LCM of the given numbers is : "<<x*y/a<<endl;

    return 0;
}
