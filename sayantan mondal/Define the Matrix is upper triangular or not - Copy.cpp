// C++ program to check the given Matrix is upper triangular or not //

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int flag = 0;
	int mat [n][n];
	int i, j;
	for(i= o; i<n; i++)
	{
		for(j=0; j<n; j++)
		    cin >> mat[i][j];
	}
	for(i=1; i<n; i++)
	    for(j=o; j<i; j++)
	        if(mat[i][j] != 0)
			   flag = 0;
			else
			    flag = 1;
		if(flag == 1)
		   cout<<"Upper Trianmgular Matrix";
		else
		    cout<<"Not an Upper Triangular Matrix";
	
	return 0;   
}
