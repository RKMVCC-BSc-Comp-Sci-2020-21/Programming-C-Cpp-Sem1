// Generating 5000 12 digits number
// Solution by Srijan Dutta


#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string b[5000];

void acc();
void sort();
bool check();
bool compare(string x, string y);
void swap(string a, string c);

int main(void){
    int f=-1,i=0;
    string n;

    acc();

    for(int j=0; j<5000;j++)
    cout << b[j] <<endl;

    cout << "Enter the account number: " << endl;
    cin >> n;
    
    for(i=0; i<5000; i++){
        if(n==b[i]){
            f=1;
            break;
        }
    }
    if(f==1)
        cout << "The account number found at :" << i << endl;
    else
        cout << "The account number wasn't found" <<endl;

}

void acc(){
    srand(time(0));

   for(int i=0;i<5000;i++){
       string a="9814";
    for(int i=1;i<=8;i++){
        int f = rand() % 10;
        string c = to_string(f);
        a = a + c;
    }
       b[i]= a;
   }
}

