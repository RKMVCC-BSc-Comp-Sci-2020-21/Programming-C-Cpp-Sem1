#include <iostream>

using namespace std;

int main(){

    int total;

    int index;

    cout<<"Enter marks of the student : ";

    cin>>total;

    switch (total){

        case 90 ... 100 :

            index = 9;

            break;

        case 80 ... 89 :

            index = 8;

            break;

        case 70 ... 79 :

            index = 7;

            break;

        case 60 ... 69 :

            index = 6;

            break;

        case 0 ... 59 :

            cout<<"fail";

        break;

    }

    cout<<index<<endl;


}
