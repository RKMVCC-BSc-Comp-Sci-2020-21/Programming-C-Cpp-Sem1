//Write a program to generate 500 Account nos. for a Bank. Each no. should have 4 constant digits followed by 12 Random Digits

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int cons, i, j;
    srand(time(0));

    cout<<"Enter the first four digits as per your bank : ";
    cin>> cons;
    cout<<"\nThe account nos. for your bank are :"<<endl;

    for(i=1; i<=500; i++)
    {
        cout<<"\n"<<i<<". "<<cons<<" ";
        for(j=1; j<=12; j++)
        {
            cout<<rand()%10;
            if(j%4==0)
                cout<<" ";
        }

    }

    cout<<"\n\n";

	return 0;
}
