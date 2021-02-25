#include <iostream>
using namespace std;

void fibonacciSeries(int term1,int term2,int term3,int total){

    for(int i = 0;i < total;++i){

        if(i==0){

            cout<<term1<<" ,";

            continue;

        }else if(i==1){

            cout<<term2<<" ,";

            continue;

        }else{

            term3 = term1 + term2;

            term1 = term2 ;

            term2 = term3 ;
        }
        cout<<term3<<" ,";
    }
}


int main(){

    int term1 = 0;

    int term2 = 1;

    int term3 = 1;

    int total = 0;

    cout<<"FIBONACCI SERIES \n";

    cout<<"Enter the number of terms : ";

    cin>>total;

    cout<<endl;

    fibonacciSeries(term1,term2,term3,total);

    cout<<endl;

    return 0;
}
