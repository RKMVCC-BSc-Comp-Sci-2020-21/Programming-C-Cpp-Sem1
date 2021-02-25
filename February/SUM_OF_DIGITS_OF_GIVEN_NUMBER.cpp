#include <iostream>

using namespace std;

int main(){

    int total = 0;

    int rmdr = 0;

    int number = 0;

    cout<<"Enter a number :";

    cin>>number;

    while(number >0){

    rmdr = number % 10;

    total = total + rmdr;

    number = number/10;

    }

    cout<<"Sum of digits of the given number : "<<total
        <<endl;

    return 0;
}
