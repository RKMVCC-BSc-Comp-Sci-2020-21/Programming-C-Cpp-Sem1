#include <iostream>

using namespace std;

int main(){

    float tem;

    cout<<"Enter temperature (\370C) : ";

    cin>>tem;

    if(tem <= 0){

        cout<<"It is freezing weather \n";

    }else if(tem > 0 && tem <= 10){

        cout<<"It is very cold weather \n";

    }else if(tem > 10 && tem <= 20){

        cout<<"It is cold weather \n";

    }else if(tem > 20 && tem <= 30){

        cout<<"It is normal weather \n";

    }else if(tem > 30 && tem <= 40){

        cout<<"It is hot weather \n";

    }else if(tem >40){

        cout<<"It is very hot weather \n";

    }else{

        return 0;

    }

    return 0;

}

