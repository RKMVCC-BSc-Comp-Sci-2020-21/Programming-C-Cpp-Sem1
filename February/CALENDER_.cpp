#include <iostream>
#include <string>

using namespace std;

int main(){

    string day[14] = {"sun ","mon ","tue ","wed ","thu ","fri ","sat ",
                      "sun ","mon ","tue ","wed ","thu ","fri ","sat "};

    string day_[14] ;

    string months[12] = {"January","February","March","April","May","June",
                         "July","August","September","October","November","December"};

    int dayCount[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int x=0;

    for(int m=0; m<12;m++){

        cout<<"--------  "<<months[m]<<"  --------"<<endl;

        for(int i=x ; i<(7+x) ; i++){

            cout<<day[i];

            day_[i-x]=day_[i-x+7]=day[i];

        }
        for(int i=0;i<14;i++){

            day[i]=day_[i];
        }
        cout<<endl;

        for(int i=1 ; i<=dayCount[m] ; i++){

            cout<<i<<"  ";

            if(i>0 &&i<=9){

                cout<<" ";
            }

            if(i%7==0){

                cout<<endl;

            }
        }
        cout<<endl<<endl;

        x = dayCount[m]%7;

    }
    return 0;


}
