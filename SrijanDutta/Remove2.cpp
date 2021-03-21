//Write a C/C++ program using function that removes an item from an array.
//Solution by Srijan Dutta


#include <iostream>
#include <time.h>

using namespace std;

int main(void){
    int a[10];
    int a2[9];
    srand(time(0));
    for(int i=0; i<10; i++){
        int c= rand();
        a[i]= c%100; 
    }
    cout << "The elements of the array are: " << endl;
    for(int i=0; i<10; i++)
        cout << a[i] << " ";
    cout << "\n Which one do you want to remove?" << endl;
    int n,k=0;
    cin >> n;
    for(int i=0; i<10; i++){
        if(a[i]==n)
            a[i]=0;
    }
    for(int i=0; i<10; i++){
        if(a[i]==0)
            continue;
        else{
            a2[k++]=a[i];
        }
    }
    cout << "The modified array is: " << endl;
    for(int i=0; i<9 ;i++)
        cout << a2[i] << " ";
}
