#include <iostream>
#include <string>

using namespace std;

int main(){

    char alpha[1];

    cout<<"Enter any alphabet : ";

    cin>>alpha[0];

    if(alpha[0]>=65 && alpha[0]<=90){

        cout<<"Entered alphabet is uppercase \n";

    }else if(alpha[0]>=97 && alpha[0]<=122){

        cout<<"Entered alphabet is lowercase \n";

    }else{

        cout<<"Invalid input \n";
    }

 return 0;

}
