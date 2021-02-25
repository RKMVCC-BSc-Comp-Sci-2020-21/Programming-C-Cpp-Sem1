#include <iostream>

using namespace std;

void sum(int arr[100], int n){

    int sum = 0 ;

    for (int i = 0; i < n; i++)

    sum = sum + arr[i];

    cout<<sum;
}

int main(){

    int arr[100] ;

    int n ;

    cout<<"Enter the number of elements of the array :";

    cin>>n;

    for(int i = 0; i<n ; i++){

        cout<<"Enter element "<<i+1<<" : ";

        cin>>arr[i];
    }

    cout << "Sum of given array is " ;

    sum(arr, n);

    return 0;
}
