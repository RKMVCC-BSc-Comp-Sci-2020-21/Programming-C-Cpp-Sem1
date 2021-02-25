#include <iostream>

using namespace std;

int main(){

    int x;

    cout<<"Enter total number of elements:";

    cin>>x;

    int z[2];

    for(int i=0;i<x;i++){

    cout<<"enter number "<<i+1<<":";

    cin>>z[i];

    }

    int y=0;

    for(int i = 0;i <(x-1);i++){

        for(int j = 0;j <(x-i-1);j++){

            if(z[j] > z[j+1]){

                y = z[j];

                z[j] = z[j+1];

               z[j+1] =y;
           }
        }
    }

    cout<<"the sorted numbers in ascending order :\n";

    for(int i=0;i<x;i++){

    cout<<z[i]<<",";
    }
    cout<<"\n";

    getchar();

    return 0;
    }
