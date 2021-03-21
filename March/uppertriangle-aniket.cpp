//C++ Program to check a matrix is upper triangle or not
#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the rows and colume of square matrix: ";
	cin>>n;
	int mat[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(mat[i][j]!=0)
				flag=0;
			else
			  flag=1;
		}
	}
	if(flag==1)
	   cout<<"Upper Triangular Matrix";
	else
	  cout<<"Not an Upper Triangular Matrix";
	return 0;
}
