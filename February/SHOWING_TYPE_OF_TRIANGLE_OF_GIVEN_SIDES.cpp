#include <iostream>

using namespace std;

int main(){

    float x,y,z;

    cout<<"Enter three side of triangle : ";

    cin>>x>>y>>z;

    if(x == y && y == z){

        cout<<"Equilateral Triangle \n";

    }else if(x == y || y == z || x == z){

        cout<<"Isoceles Triangle \n";

    }else if(x != y != z){

        cout<<"Scalene Triangle \n";

    }else{

        cout<<"Invalid input \n";

    }

    return 0;

}
