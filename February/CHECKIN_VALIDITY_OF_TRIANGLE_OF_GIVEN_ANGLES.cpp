#include <iostream>

using namespace std;

int main(){

    float x,y,z;

    cout<<"Enter three angles of triangle (in \370): ";

    cin>>x>>y>>z;

    if(x+y+z == 180){

        cout<<"The triangle is valid \n";

    }else{

        cout<<"The triangle is invalid \n";

    }

    return 0;

}
