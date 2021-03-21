#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void){
    srand(time(0));
    int u, r;
    cout << "Enter the sides of the matrix: " << endl;
    cin >>u;
    cin >>r;
    int *a =(int*)malloc(u * r * sizeof(int));
    for(int i=0; i<u; i++){
        for(int j=0; j<r; j++){
            a[i][j]= (int)rand();
        }
    }
}