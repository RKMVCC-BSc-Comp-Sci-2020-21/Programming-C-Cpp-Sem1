#include<iostream>
#define N 5
using namespace std;
class sorting
{
	 private:
	 	int n[N];
	 	int max,min;
	public:
		void getdata()
		{
			for(int i=0;i<N;i++)
			{
				cout<<"Enter the elements ";
				cin>>n[i];
			}
		}
		void calculate()
		{
			max=min=n[0];
			for(int i=0;i<N;i++)
			{
				if(n[i]>max)
				{
					max=n[i];
				}
				if(n[i]<min)
				{
					min=n[i];
				}
			}
		}
		void showdata()
		{
			cout<<"\nHighest number in the array"<<max<<endl;
			cout<<"\nLeast number in the array"<<min<<endl;
		}
};
int main()
{
	sorting obj;
	obj.getdata();
	obj.calculate();
	obj.showdata();
	return 0;
}
