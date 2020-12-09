//Write a program in C++ to Sort an user given array using Selection Sort
// Solution by Srijan Dutta

#include <iostream>

using namespace std;

int main(void){
    int l;
    int a[10];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<10;i++){
        cin>>a[i];                // Taking input from user
    }
    int i,j,s,t,p=0,k=0;
    for(i=0;i<10;i++){
        s=a[i];
        p=i;
        for(j=i+1;j<10;j++){    // Sorting the array
            if(a[j]<s){
                s=a[j];
                p=j;
            }

        }
        t=a[p];
        a[p]=a[i];
        a[i]=t;
    }
    cout<<"The sorted array is:\n";
    for(int i=0;i<10;i++)
    cout<<a[i]<<",";
    
}
