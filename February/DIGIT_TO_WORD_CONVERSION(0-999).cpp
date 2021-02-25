#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;

    int a = 0,b = 0,c = 0,d = 0;

    string ten[20]={"","one ","two ","three ","four ","five ",
                     "six ","seven ","eight ","nine ",
                    "ten ","eleven ","twelve ",
                    "thirteen ","fourteen ","fifteen ",
                    "sixteen ","seventeen ","eighteen ",
                    "nineteen "};

    string hundred[10]={"","twenty ","thirty ","forty ","fifty ",
                        "sixty ","seventy ","eighty ","ninety "};

    string others[10]={"","hundred ","thousand ","lakh ","crore "};

    string word[100];

    cout<<"Enter a number : ";

    cin>>n;

        d = n/100;

       if(n>99){

           c = 1;

       }

        n = n%100;

        if(n<20){

            a = n;

        }else{

        a = n%10;

        b = n/10 - 1;

        }

    word[17] = ten[d];

    word[18] = others[c];

    word[19] = hundred[b];

    word[20] = ten[a];

    cout<<"Entered number in words : "

       <<word[17]<<word[18]<<word[19]<<word[20]<<endl;

    return 0;

}
