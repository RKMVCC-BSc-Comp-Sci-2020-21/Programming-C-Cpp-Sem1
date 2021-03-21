//Find the number and sum of all integer between 100 and 200 which are divisible by 9.
//Solution by Srijan Dutta

#include <iostream>

using namespace std;

int main(void){
    int n=0,s=0;
    for(int i=100;i<=200;i++){
        if(i%9==0){
            n++;
            s+=i;
        }
    }
    cout<<"The number of integers between 100 & 200 divisible by 9 is: "<<n<<"\nThe sum of all integers divisble by 9 between 100 & 200 is: "<<s;
}
