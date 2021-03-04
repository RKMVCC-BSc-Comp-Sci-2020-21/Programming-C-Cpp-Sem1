//Name:- Avirup Dutta  ,  Roll no:- 721


#include<iostream>
using namespace std;

class construct{
    public:
    int a,b;
    construct(int x,int y){
        a=x;
        b=y;
    }
};
main(){
    construct c(12,15);
    cout<<"a"<<c.a<<endl
        <<"b:"<<c.b;
}
