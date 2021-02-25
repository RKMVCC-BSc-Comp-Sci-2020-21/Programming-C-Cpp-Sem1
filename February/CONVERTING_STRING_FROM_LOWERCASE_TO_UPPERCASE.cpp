#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char str[100];

    cout<<"Enter a string :- ";

    cin>>str;

    for(int i = 0;i<=strlen(str);i++){

        if(str[i] >= 97 && str[i] <= 125){

            str[i] = str[i]-32;
        }
    }
    cout<<"Entered string after converting lower case to upper case :- "<<str<<endl;

    return 0;

}
