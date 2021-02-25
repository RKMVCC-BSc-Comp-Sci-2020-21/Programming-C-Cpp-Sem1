#include <iostream>

using namespace std;

int main(){

    float a = 0;

    int n = 0;

    float d = 0;

    float total = 0;

    cout<<" Type the number of terms : ";

    cin>>n;

    cout<<"\n Type the first term :";

    cin>>a;

    cout<<"\n Type the common difference between terms :";

    cin>>d;

    cout<<"\n Entered A.P. series : ";

    for(int i=0;i<n;i++){

        cout<<a<<",";

        total = total + a;

        a = a + d;

    }

    cout<<"\n The sum of the A.P. series : "<<total<<endl;

    return 0;

}
