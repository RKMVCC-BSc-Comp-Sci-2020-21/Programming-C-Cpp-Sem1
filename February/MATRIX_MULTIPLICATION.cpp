#include <iostream>

using namespace std;

void inputMat(int a[][10], int b[][10], int ra, int ca, int rb, int cb){

    cout << endl << "Enter elements of the first matrix :" << endl;

    for(int i = 0; i < ra; ++i){

        for(int j = 0; j <ca; ++j){

            cout << "Enter elements a"<< i + 1 << j + 1 << ": ";

            cin >> a[i][j];
        }
    }

    cout << endl << "Enter elements of the second matrix:" << endl;

    for(int i = 0; i < rb; ++i){

        for(int j = 0; j < cb; ++j){

            cout << "Enter elements b" << i + 1 << j + 1 << ": ";

            cin >>b[i][j];
        }
    }
}

void multiplyMat(int a[][10], int b[][10], int mult[][10], int ra, int ca, int rb, int cb)
{

    for(int i = 0; i < ra; ++i){

        for(int j = 0; j < cb; ++j){

            mult[i][j] = 0;
        }
    }

    for(int i = 0; i < ra; ++i){

        for(int j = 0; j < cb; ++j){

            for(int k = 0; k<ca; ++k){

                mult[i][j] = mult[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

void displayMat(int mult[][10], int ra, int cb){

    cout << "Output Matrix:" << endl;

    for(int i = 0; i < ra; ++i){

        for(int j = 0; j < cb; ++j){

            cout << mult[i][j] << " ";

                 if(j==cb-1){

                     cout<<"\n";
                 }
           }
      }
}

int main(){

    int a[10][10], b[10][10], mult[10][10], ra, ca, rb, cb;

    cout << "Enter rows and column for first matrix: ";

    cin >>ra >> ca;

    cout << "Enter rows and column for second matrix: ";

    cin >>rb >> cb;


    while (ra != cb)
    {
        cout<<"Error,column of first matrix in not equal to row of second matrix";

        cout << "Enter rows and column for first matrix: ";

        cin >>ra >> ca;

        cout << "Enter rows and column for second matrix: ";

        cin >>rb >> cb;
    }

        inputMat(a,b,ra,ca,rb,cb);

        multiplyMat(a,b,mult,ra,ca,rb,cb);

        displayMat(mult,ra,cb);

    return 0;

}


