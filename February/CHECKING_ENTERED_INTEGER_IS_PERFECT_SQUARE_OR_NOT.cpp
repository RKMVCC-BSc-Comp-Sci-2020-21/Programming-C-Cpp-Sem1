#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long double x){

    int sqr = sqrt(x);

    if (sqr * sqr == x) {

        return true;

    }else{

        return false;

    }
}

int main(){

    int x=0;

    cout<<"Enter a number : ";

    cin>>x;

    if (isPerfectSquare(x)){

        cout << "Given numbern is a perfect square \n";

    }else{

        cout << "given number is not a perfect square \n";

    }

    return 0;
}
