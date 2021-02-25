#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout<<"SOLVING QUADRATIC EQUATION"<<endl;

    float a,b,c;

    float x1 = 0,x2 = 0;

    cout<<"Enter the coeffcient a , b , c :";

    cin>>a>>b>>c;

    float D = b*b - 4*a*c;

    if(D>0){

        cout<<endl<<"The roots are different and real\n"
                    "The roots are : ";

        x1 = (-b + sqrt(D))/(2*a);

        x2 = (-b - sqrt(D))/(2*a);

        cout<<x1<<" and "<<x2<<endl;

    }else if(D == 0){

        cout<<endl<<"The roots are same and real\n"
                    "The root is : ";

        x1 = -b/(2*a);

        cout<<x1<<endl;

    }else{

        float rp = -b/(2*a);

        float ip = (sqrt(-D))/(2*a);

        cout<<endl<<"The roots are different and complex\nThe roots are : ";

        cout<<rp<<" - i("<<ip<<") and ";

        cout<<rp<<" + i("<<ip<<") \n ";
    }

    return 0;
}

