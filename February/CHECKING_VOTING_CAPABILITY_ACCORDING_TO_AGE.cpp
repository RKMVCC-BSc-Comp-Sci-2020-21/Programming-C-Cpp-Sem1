#include <iostream>

using namespace std;

int main(){

    int age;

    cout<<"Enter the age of the candidate : ";

    cin>>age;

    if(age > 18){

        cout<<"Candidate is eligible for casting his/her own vote \n";

    }else{

        cout<<"Candidate is not eligible for casting his/her own vote \n";

    }

    return 0;

}
