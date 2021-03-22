#include<iostream>

using namespace std;

int main(){

    int total = 0;

    int n = 10;

    for(int i = 1 ; i<=n ; i++ ){

        total=total+i;

    }

    cout<<"Sum of first "<<n<<" natural number : "<<total<<endl;

    return 0;
}
