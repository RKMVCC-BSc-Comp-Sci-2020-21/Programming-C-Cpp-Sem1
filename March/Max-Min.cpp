#include<iostream>
using namespace std;
int main()
{
	int a[4]={1,2,3,4};
	int i,max,min;
	max=a[0];
	min=a[0];
	for(i=0;i<4;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	for (i=0;i<4;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"MAX="<<max<<endl;
	cout<<"MIN="<<min<<endl;
	return 0;
}
