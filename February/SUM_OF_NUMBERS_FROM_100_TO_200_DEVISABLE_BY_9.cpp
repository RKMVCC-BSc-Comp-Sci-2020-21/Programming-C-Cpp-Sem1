#include <iostream>

using namespace std;

int main(){

    int total = 0;

    for(int i=100 ; i<=200 ; i++){


        if(i%9==0){

            total=total+i;

        }
    }

    cout<<"The sum of the number between 100 and 200 divisible by 9 is :"
        <<total<<endl;


    return 0;
}
