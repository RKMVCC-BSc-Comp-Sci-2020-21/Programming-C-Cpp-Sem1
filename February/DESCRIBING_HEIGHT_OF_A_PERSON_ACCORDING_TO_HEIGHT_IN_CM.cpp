#include <iostream>

using namespace std;

int main(){

    float ht;

    cout<<"Enter the height of the person (in centimetres) :";

    cin>>ht;

    if (ht < 150.0){

        cout<<"The person is short heighted. \n";

    }else if ((ht >= 150.0) && (ht < 165.0)){

        cout<<"The person is avarage heighted. \n";

    }else{

        cout<<"The person is tall. \n";

    }

    return 0;

}
