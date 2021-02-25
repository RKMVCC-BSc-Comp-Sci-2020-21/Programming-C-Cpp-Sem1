#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n,a = 0,b = 0,p = 1,e = 0;

    cout<<"Enter the lenth of the series : ";

    cin>>n;

    for(int i = 1;i <= n;i++){

        a = a+1;

        p = p+1;

        b = pow(-1,p);

        cout<<"+("<<a*b<<")";

        e = e + a*b;

    }

    cout<<" is equal to : "<<e<<endl;


    return 0;


}
