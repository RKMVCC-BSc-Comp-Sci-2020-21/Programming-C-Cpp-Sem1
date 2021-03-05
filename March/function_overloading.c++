//Name:- Avirup Dutta  ,  Roll:- 721


#include<iostream>
using namespace std;

class Addition{
    public:
    int sum(int num1,int num2){
        return num1+num2;
    }
};
main(){
    Addition obj;
    cout<<obj.sum(20,15)<<endl;
    cout<<obj.sum(87,100);
}
