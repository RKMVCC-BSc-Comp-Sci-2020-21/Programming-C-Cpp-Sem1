// c++ program to convert lower to upper case
//Coded by ANIRUDDHA
using namespace std;
#include<iostream>
#include<stdio.h>
class lowtoupper
{
	private:
		char str[100];
	public:
		void getdata(){
		cout<<"Enter any string in lower case";
		gets(str);	
		}
		void showdata()
		{
		  for(int i=0;str[i]!='\0';i++)
		  {
		  	if(str[i]>='a'&& str[i]<='z')
		  	{
		  		str[i]=str[i]-32;
		  		
			  }
			  }
		cout<<"The string in upper case"<<str;	
		}
			
};
int main()
{
	lowtoupper obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
