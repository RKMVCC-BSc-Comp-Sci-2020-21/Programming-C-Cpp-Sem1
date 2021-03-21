#include<iostream>
using namespace std;
class index
{
	private:
		int n[10],i;
	public:
		void getdata()
		{
			for(i=0;i<=9;i++ )
			{
				cout<<"Enter the numbers : \n";
				fflush(stdin);
				cin>>n[i];
			}
		}
		void finddata()
		{
			int st;
			int j;
			cout<<"Enter the number to be searched : ";
			cin>>st;
			for(j=0;j<=9;j++)
			{
				if(n[j]==st)
				{
					cout<<"Number found in index "<<j;
					break;
				}
			}
			if(j>9)
			{
				cout<<"Number not found";
			}
	}
};
int main()
{
	index obj;
	obj.getdata();
	obj.finddata();
	return 0;
}
