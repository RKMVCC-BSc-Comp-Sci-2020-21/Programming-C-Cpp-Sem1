//Write a Menu-Driven Program to Add, Subtract or Multiply two Random Matrices.

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int Mat1[10][10], Mat2[10][10], Res[10][10], R1, C1, R2, C2, i, j;

void EnterData()
{
	for(i = 0; i < R1; ++i)
	{
		for(j = 0; j < C1; ++j)
            Mat1[i][j]=rand()%10;
	}

	for(i = 0; i < R2; ++i)
	{
		for(j = 0; j < C2; ++j)
            Mat2[i][j]=rand()%10;
    }
}

void AddMatrices()
{
    if((R1!=R2)||(C1!=C2))
    {
        cout<<"\tERROR! The Matrices cannot be Added!\n\n";
        exit(0);
    }

    else
    {
        for(i = 0; i < R1; ++i)
        {
            for(j = 0; j < C2; ++j)
                Res[i][j] = 0;
		}

        for(i = 0; i < R1; ++i)
        {
            for(j = 0; j < C1; ++j)
                Res[i][j] = Mat1[i][j] + Mat2[i][j];
        }
    }
}

void SubMatrices()
{
    if((R1!=R2)||(C1!=C2))
    {
        cout<<"\tERROR! The Matrices cannot be Subtracted!\n\n";
        exit(0);
    }
    else
    {
        for(i = 0; i < R1; ++i)
        {
            for(j = 0; j < C2; ++j)
                Res[i][j] = 0;
		}


        for(i = 0; i < R1; ++i)
            for(j = 0; j < C1; ++j)
                Res[i][j] = Mat1[i][j] - Mat2[i][j];
    }
}

void MulMatrices()
{
    if(C1!=R2)
    {
        cout<<"\tERROR! The Matrices cannot be Multiplied!\n\n";
        exit(0);
    }
    else
    {
        int k;

        for(i = 0; i < R1; ++i)
        {
            for(j = 0; j < C2; ++j)
                Res[i][j] = 0;
		}

        for(i = 0; i < R1; ++i)
        {
            for(j = 0; j < C2; ++j)
            {
                for(k=0; k<C1; ++k)
                    Res[i][j] += Mat1[i][k] * Mat2[k][j];

            }
        }
    }
}

void Display()
{
	cout << "Resultant Matrix:\n\n  ";
	for(i = 0; i < R1; ++i)
	{
		for(j = 0; j < C2; ++j)
		{
            if(Res[i][j]>=0)
                cout <<"+"<< Res[i][j] << " ";
            else
                cout << Res[i][j] << " ";
		}
        cout << "\n  ";
	}
	cout<<"\n\n";
}

int main()
{
    int ch;
    srand(time(0));

	cout << "Enter no. of rows for first matrix: ";
	cin >> R1;
	cout << "Enter no. of columns for first matrix: ";
	cin >> C1;

	system("CLS");

	cout << "Enter no. of rows for second matrix: ";
	cin >> R2;
	cout << "Enter no. of columns for second matrix: ";
	cin >> C2;

	system("CLS");

	EnterData();

	system("CLS");

	cout<<"What operation do you want to do?\n"<<endl;
    cout<<"1 for Addition\n";
    cout<<"2 for Subtraction\n";
    cout<<"3 for Multiplication\n";
    cout<<"\n\tEnter your choice --> ";
    cin>>ch;

	system("CLS");

	cout << "Matrix A:\n\n   ";
	for(i = 0; i < R1; ++i)
	{
		for(j = 0; j < C1; ++j)
            cout << Mat1[i][j] << " ";
        cout << "\n   ";
	}

	cout << "\nMatrix B:\n\n   ";
	for(i = 0; i < R2; ++i)
	{
		for(j = 0; j < C2; ++j)
			cout << Mat2[i][j] << " ";
        cout << "\n   ";
	}

	cout<<"\n\n";

	switch(ch)
	{
	    case 1: AddMatrices(); break;
        case 2: SubMatrices(); break;
        case 3: MulMatrices(); break;
     default : system("CLS"); cout<<"\n\tInvalid Input!\n\n\n"; exit(0);
	}

    Display();

	return 0;
}
