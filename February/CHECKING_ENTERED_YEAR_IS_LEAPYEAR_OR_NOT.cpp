#include <iostream>

using namespace std;

int main(){

    int yr;

    bool lp_year = false;

    cout<<"Enter a year : ";

    cin>>yr;

    if (yr%100>0 && yr%100<100){

        if(yr%4 == 0){

            lp_year = true;

        }

    }else{

        if(yr%400 == 0){

            lp_year = true;

         }
    }

    if (lp_year == true){

        cout<<"It is a leap year "<<endl;

    }else{

        cout<<"It is not a leap year "<<endl;

    }

    return 0;
}
