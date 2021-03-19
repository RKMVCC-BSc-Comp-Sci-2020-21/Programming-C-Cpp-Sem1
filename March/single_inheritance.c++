// Name:- Avirup Dutta  ,  Roll no:- 721


#include<iostream>
using namespace std;
class Account{
    public:
    float salary=60000;
};
class programmer: public Account{
    public:
    float bonus=5000;
};
int main(void){
    programmer p1;
    cout<<"Salary:"<<p1.salary<<endl;
    cout<<"Bonus:"<<p1.bonus<<endl;
    return 0;
}
