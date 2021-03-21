//Simmiler different of array
#include<iostream>
using namespace std;
int main()
{
	int a[4]={1,2,3,4};
	int b[4]={3,4,5,6};
	int com=0,un = 0;
	int i,j,k;
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if (a[i]==b[i])
			{
				com++;
			}
			
		}
	}
	un=8-2*com;
	cout<<endl;
	cout<<"Number of common elements"<<com<<endl;
	cout<<"Number of uncommon elements"<<un<<endl;
	return 0;
}
