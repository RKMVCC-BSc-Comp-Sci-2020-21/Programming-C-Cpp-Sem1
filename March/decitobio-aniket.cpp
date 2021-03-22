//Program to decimal to binary conversion
#include<iostream>
using namespace std;
void dectobinary(int n)
{
	int binary[32];
	int i=0;
	while(n>0)
	{
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<binary[j];
	}
}

int main()
{
	int n;
	printf("\nEnter deccimal value: ");
	scanf("%d",&n);
	dectobinary(n);
	return 0;
}
