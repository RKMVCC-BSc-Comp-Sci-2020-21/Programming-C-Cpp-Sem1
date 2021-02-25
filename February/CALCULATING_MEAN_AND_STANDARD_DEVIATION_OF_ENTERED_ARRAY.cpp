#include <iostream>
#include <cmath>

using namespace std;

void meanStdevCal(int n,int arr[100],double stddev,double m){

    for(int i = 0;i<n;i++){

        m = m + arr[i];

    }
    m = m/n;
\
    for(int i = 0;i<n;i++){

        stddev = stddev + ((arr[i] - m)*(arr[i] - m)/n);

    }
    stddev = sqrt(stddev);

    cout<<"Mean of the given numbers : "<<m;

    cout<<endl<<"Standard deviation of given numbers : "<<stddev<<endl;

}

int main(){

    int n,arr[100];

    double stddev = 0,m = 0;


    cout<<"Enter the number of elements : ";

    cin>>n;

    for(int i = 0;i<n;i++){

        cout<<"Enter element no. "<<i+1<<" : ";

        cin>>arr[i];

    }
    meanStdevCal(n,arr,stddev,m);


    return 0;
}
