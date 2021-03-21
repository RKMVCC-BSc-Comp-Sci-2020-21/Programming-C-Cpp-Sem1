#include<iostream>
using namespace std;
class number
{
 public :
 	int even(int x[])
 	{
 		int a=0,b=0,c,d;
 		for(int j=0;j<=9;j++)
 		{
 			if(x[j]%2==0)
 			{
 			//	cout<<"even";
 				a++;
 				c+=x[j];
 				
			 }
			 else
			 {
			 //	cout<<"\nOdd";
			 b++;
			 d+=x[j-a];
			 }
		 }
		 cout<<"Number of even number "<<a;
		 cout<<"\n Number of odd number "<<b;
		 cout<<"\nSum of even number "<<c;
		 cout<<"\nSum of odd numbers "<<d;
	 }
 	
};
int main()
{
	int arr[10],res;
	cout<<"Enter ten numbers";
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	number obj;
	res=obj.even(arr);
	return 0;
	
	
}
