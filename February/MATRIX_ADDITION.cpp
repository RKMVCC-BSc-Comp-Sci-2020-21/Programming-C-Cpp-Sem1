#include <iostream>

using namespace std;

void matAddition(int mat1[10][10],int mat2[10][10],int row,int col){

    for (int i = 0;i < row;i++){

        for (int j = 0;j < col; j++){

            mat1[i][j] = mat1[i][j] + mat2[i][j];

        }
    }
}

void display(int mat1[10][10],int row,int col){

    cout<<"Result of the addition : \n";

    for (int i = 0;i < row;i++){

        for (int j = 0;j < col; j++){

           cout<<mat1[i][j]<<"  ";

           if(j == col - 1){

               cout<<endl;
           }

        }
    }
}


int main(){

    int mat1[10][10];

    int mat2[10][10];

    int row,col;

    cout<<"Enter the number of rows and column of both matrix : ";

    cin>>row>>col;

    cout<<"Enter the elements of the first matrix : \n";

    for (int i = 0;i < row;i++){

        for (int j = 0;j < col; j++){

            cout<<"Enter element a"<<i+1<<j+1<<" : ";

            cin>>mat1[i][j];

        }
    }

    cout<<"Enter the elements of the second matrix : \n";

    for (int i = 0;i < row;i++){

        for (int j = 0;j < col; j++){

            cout<<"Enter element b"<<i+1<<j+1<<" : ";

            cin>>mat2[i][j];

        }
    }

    matAddition(mat1,mat2,row,col);

    display(mat1,row,col);

    return 0;


}
