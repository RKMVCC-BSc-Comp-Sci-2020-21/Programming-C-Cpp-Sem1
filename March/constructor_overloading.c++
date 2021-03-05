//Name:- Avirup Dutta  ,  Roll no:- 721


#include<iostream>
using namespace std;

class construct{
    public:
    int a,b;
    construct(){
        a=10;
        b=20;
    }
    construct(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"a:"<<a<<endl
        <<"b:"<<b<<endl;
    }
};
main(){
    construct c;
    construct s(45,27);
    c.print();
    s.print();
}
