#include <iostream>
using namespace std;


void display(int n[][2]) {
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}

int main() {

    
    int num[3][2] = {
        {30, 14},
        {19, 15},
        {07, 21}
    };

  
    display(num);

    return 0;
}
