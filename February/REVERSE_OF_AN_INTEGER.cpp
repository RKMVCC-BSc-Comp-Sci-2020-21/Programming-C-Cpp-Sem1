#include<iostream>

using namespace std;

int main(){
    unsigned int number = 0;

    unsigned int re_number = 0;

    unsigned int rd= 0;

    cout<<"Enter a number : ";

    cin>>number;

    while(number > 0){

       rd = number % 10;

       re_number = re_number*10 + rd;

       number = number / 10;
    }

    cout<<"\nReversed number : "<<re_number<<endl;

    return 0;
}
