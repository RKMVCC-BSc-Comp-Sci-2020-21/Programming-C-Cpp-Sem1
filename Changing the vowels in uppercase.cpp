//CODED BY ANIRUDDHA
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class sentence
{
	private:
			char st[50];
	public:
		void getdata()
		{
			cout<<"Enter any sentence:";
			gets(st);
		}
		void showdata()
		{
			int i,l;
			l=strlen(st);
			for(i=0;i<l;i++)
			{
				if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
				cout<<(char)(st[i]-32);//type custing
				else
				cout<<st[i];
			}
		}
};
int main()
{
	sentence obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
