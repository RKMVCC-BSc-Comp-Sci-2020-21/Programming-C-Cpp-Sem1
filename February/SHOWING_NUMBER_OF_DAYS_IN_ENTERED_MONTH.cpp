#include <iostream>
#include <string>

using namespace std;

int main(){

    string days[13]={"","31","28 (29 if leap year)","31","30","31","30",
                       "31","31","30","31","30","31"};

    int m;

    cout<<"Enter month no. : ";

    cin>>m;

    cout<<"Number of days in the entered month :"<<days[m]<<endl;

    return 0;

}
