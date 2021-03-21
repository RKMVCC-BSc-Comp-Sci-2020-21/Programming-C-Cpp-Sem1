#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int a[5][5];

int torf(){
    srand(time(0));
    int r= (rand())%10;
    while(r!=2 || r!=4){
         r = (rand())%10;
         if(r==2 || r==4)
            break;
    }
    return r;
}

int five(){
    srand(time(0));
    int r= (rand())%10;
    while(r==0 || r>5){
        r = (rand())%10;
        if(r>0 && r<6)
            break;
    }
    return r;
}

void display(int b[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int add(int a, int b){
    int s=0;
    if(a==b)
        s=a+b;
    return s;
}

void assign(int f){
    int k=0;
    if(f==1)
        k=2;
    else
        k=1;
    for(int i=1; i<=k; i++){
        int o,t;
        o=five();
        t=five();
        a[o][t]=torf();
        cout << o << t ;
    }
}

void moveW(int a[5][5]){
    for(int j=0; j<5;j++){
        int k=0;
        for(int i=0;i<4;i++){
            a[k][j]=add(a[i][j],a[i+1][j]);
            a[i+1][j]=0;
        }
    }
}

void moveS(int a[5][5]){
    for(int j=4; j>=0;j--){
        int k=4;
        for(int i=4; i>0;i--){
            a[k][j]=add(a[i][j],a[i-1][j]);
            a[i-1][j]=0;
        }
    }
}



void moveD(int a[5][5]){

}

int main(void){
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            a[i][j]=0;
        }
    }
    cout << "Use W A S D to play and to abort press 0 ";
    assign(1);
    display(a);
}