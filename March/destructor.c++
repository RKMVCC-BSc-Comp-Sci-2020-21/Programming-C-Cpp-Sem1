// Name:- Avirup Dutta  ,  Roll no:- 721


#include<iostream>
using namespace std;

class construct{
    public:
    int a,b;
    construct(){
        a=10;
        b=20;
    }
    ~construct(){
        cout<<"Object Destroyed";
    }
};
main(){
    construct c;
    cout<<"a:"<<c.a<<endl
    <<"b:"<<c.b<<endl;
}
