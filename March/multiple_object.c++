// Name:- Avirup Dutta  ,  Roll no:- 721


#include <iostream>
using namespace std;

class construct{
    public:
    int a,b;
    construct(int x,int y){
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"a:"<<a<<endl
        <<"b:"<<b;
    }
};
main()
{
    construct c(12,15);
    construct s(45,27);
    c.print() ;
    s.print();
}
