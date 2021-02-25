#include <iostream>
#include <string>

using namespace std;

int main(){

    char str[10];

    cout<<"Enter a string : ";

    cin>>str;

    int  n = strlen(str);

    for(int i = 0;i < n/2 ;i++){

        if(str[i]==str[n-1-i]){

            cout<<"The string is palindrome"<<endl;

            break;

        }else{

            cout<<"The string is not palindrome"<<endl;

            break;
        }
    }
}
