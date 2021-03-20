//Write a Menu-Driven Program to generate Lower and Upper Triangular Matrices

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int Mat[10][10], Res[10][10], R, C, i, j;

void EnterData()
{
	for(i = 0; i < R; ++i)
	{
		for(j = 0; j < C; ++j)
            Mat[i][j]=rand()%10;
	}
}

void UpperTriangle()
{
    for(i = 0; i < R; ++i)
	{
		for(j = 0; j < C; ++j)
        {
            if(i>j)
                Res[i][j] = 0;
            else
                Res[i][j] = Mat[i][j];
        }
	}
}

void LowerTriangle()
{
    for(i = 0; i < R; ++i)
	{
		for(j = 0; j < C; ++j)
        {
            if(i<j)
                Res[i][j] = 0;
            else
                Res[i][j] = Mat[i][j];
        }
	}
}

void Display()
{
	cout << "Output Matrix:\n\n   ";
	for(i = 0; i < R; ++i)
	{
		for(j = 0; j < C; ++j)
		{
			cout << Res[i][j] << " ";
			if(j == C - 1)
				cout << "\n   ";
		}
	}
	cout<<"\n\n";
}

int main()
{
    int ch;
    srand(time(0));

	cout << "Enter no. of rows for matrix: ";
	cin >> R;
	cout << "Enter no. of columns for matrix: ";
	cin >> C;

	system("CLS");

	EnterData();

	cout<<"Press:\n"<<endl;
    cout<<"1 for Upper Triangular Matrix\n";
    cout<<"2 for Lower Triangular Matrix\n";
    cout<<"\n\tEnter your choice --> ";
    cin>>ch;

	system("CLS");

	switch(ch)
	{
	    case 1: UpperTriangle();
                break;
        case 2: LowerTriangle();
                break;
        default : cout<<"INVALID INPUT!\n\n";
                  exit(0);
	}

    Display();

	return 0;
}
