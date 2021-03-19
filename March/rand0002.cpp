/*Write a C/C++ program using a function that returns the minimum value among the first n
elements of the given array.*/
#include<iostream>
#define SIZE 5
using namespace std;

class Minvalue
{
	int arr[SIZE];
	int i,j,temp;
	public:
		void input();
		void output1();
		void sort();
		void output2();
};

void Minvalue :: input()
{
	for(i=0;i<SIZE;i++)
	{
		cout<<"\n\tEnter into index "<<i<<":";
		cin>>arr[i];
	}

}

void Minvalue :: output1()
{
		cout<<"\n\tYou entered : ";
	for(i=0;i<SIZE;i++)
		cout<<"\t"<<arr[i];

}
void Minvalue :: sort()
{
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

}
void Minvalue :: output2()
{
	for(i=0;i<SIZE;i++)
	{
	
		cout<<"\n\tThe minimum value among the the given array : "<<arr[0];
		break;
	}
	for(i=0;i<SIZE;i++)
	{
	
		cout<<"\n\tThe maximum value among the the given array : "<<arr[4];
		break;
	}
}
int main()
{
	Minvalue obj;

	obj.input();
	obj.output1();
	obj.sort();
	obj.output2();

	return 0;
}
