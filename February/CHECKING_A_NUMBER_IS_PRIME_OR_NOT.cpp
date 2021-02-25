#include <iostream>

using namespace std;

int main(){

    int a = 0;

    cout<<"Enter a number : ";

    cin>>a;

    if (a==0||a==1){

        cout<<"the number is not prime \n";

    }else{

        for(int i=2;i <= a/2;++i){

              if(a%i==0){

                  cout<<"the number is not prime \n";

                  break;
         }else{

                cout<<"the number is prime  \n";

                break;
              }
         }
     }
    return 0;
}
