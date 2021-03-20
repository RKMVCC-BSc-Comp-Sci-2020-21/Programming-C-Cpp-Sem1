//program to multiply of two numbers using C++//
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	cout<<"Enter number of rows: ";
	cin>>r;
	cout<<"Enter number f columns: ";
	cin>>c;
	cout<<"Enter the first matrix element:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix element:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Multiply of the matrix: \n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<mul[i][j];
			
		}
		cout<<"\n";
	}
	return 0;
}
