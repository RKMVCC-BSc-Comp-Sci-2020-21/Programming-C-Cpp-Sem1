#include <iostream>

using namespace std;


int main(){

    cout<<"Solving 2 linear equation in the form of :\n"
          " a1.x + b1.y =c1 \n a2.x + b2.y =c2\n \n";

    float a1,b1,c1,a2,b2,c2 = 0;

    float x,y =0;

    cout<<" Enter the 3 coefficient of 1st equation : \n";

    cin>>a1>>b1>>c1;

    cout<<" Enter the 3 coefficient of 2nd equation : \n";

    cin>>a2>>b2>>c2;

    while(a1==a2&&b1==b2&&c1==c2){

        cout<<"This eqations have infinty solutions \n";

        cout<<" Enter the 3 coefficient of 1st equation : \n";

        cin>>a1>>b1>>c1;

        cout<<" Enter the 3 coefficient of 2nd equation : \n";

        cin>>a2>>b2>>c2;
    }

    x=((c1*a1)-(c2*a1))/((a2*b1)-(a1*b2));

    cout<<"The value of x is :"<<x;

    y=((c1*b2)-(c2*b1))/((b2*a1)-(b1*a2));

    cout<<endl<<"The value of y is :"<<y<<endl;

    return 0;

}
