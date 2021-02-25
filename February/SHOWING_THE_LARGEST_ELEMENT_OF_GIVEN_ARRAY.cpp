#include <iostream>

using namespace std;

int main() {

    int x = 0;

cout<<"how many numbers to enter:";

cin>>x;

int z[2];

for(int i=0;i<x;i=i+1){

    cout<<"enter number "<<i+1<<":";

    cin>>z[i];
}
for(int j = 1;j < x;j=j+1){

    if(z[0] < z[j]){

    z[0] = z[j];
}}
    cout<<"Largest number is:"<< z[0]<<"\n";

    return 0;
}
