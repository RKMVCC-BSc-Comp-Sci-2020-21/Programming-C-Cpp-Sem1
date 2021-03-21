#include <iostream>
#include <time.h>
#include <cstring>

using namespace std;

int rangedrand(){
    int a[26];
    int k=65;
    for(int i=0;i<26;i++){
        a[i]=k++;
    }
    srand(time(0));
    int b=(rand())%100;
    while(b>25){
        b=(rand())%100;
    }
    return a[b];
}

int shift(){
     char a = rangedrand();
     int b = a-65;
     return b;
    
}

int main(void){
   string pass;
   cout << "Enter your password:";
   cin >> pass;
   int l = pass.length();
   for(int i=0; i<l; i++){
       int s = shift();
       cout << s;
       pass[i]+= s;
   }
   cout << pass;
}