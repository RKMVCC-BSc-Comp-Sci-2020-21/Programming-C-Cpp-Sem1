#include<iostream>
using namespace std;
class array
{
	//nember variables
	int arr[30];
	int len;
	//number functions
	public:
	void getdata()
	{
		int i;
		cout<<"enter the lenth: ";
		cin>>len;
		cout<<"enter the elements of array: ";
		for(i=0;i<len;i++)
		   cin>>arr[i];
		}	
	void display()
	{
		int i;
		cout<<"the elements of the array are: "<<endl;
		for(i=0;i<len;i++)
		  cout<<arr[i];
		}
	void sumofelements()	
	{
		int sum=0,i;
		for(i=0;i<len;i++)
		   sum+=arr[i];
		cout<<endl<<"the sum of the elements is: "<<sum;
			}		
};
int main()
{
	array a1;
	a1.getdata();
	a1.display();
	a1.sumofelements();
}
