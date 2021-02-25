#include <iostream>

using namespace std;

int main(){

    float a,b,c,temp;

    cout<<"Enter three side of triangle (in cm.) : ";

    cin>>a>>b>>c;

    if(b > a){

        temp = a;

        a = b;

        b = temp;

    }else if(c > a){

        temp = a;

        a = c;

        c = temp;

    }else{

        a = a;

    }

    if(c+b > a){

        cout<<"The triangle is valid \n";

    }else{

        cout<<"The triangle is invalid \n";

    }

    return 0;

}
