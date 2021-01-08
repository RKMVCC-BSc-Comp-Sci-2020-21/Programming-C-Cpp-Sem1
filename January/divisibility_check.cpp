//coded by Aniruddha

#include<iostream>
using namespace std;
int main()
{
int a,i;
cout<<"It is a programming to check the number divisible by 5";
cout<<"\n\n\nEnter the terminal number : ";
cin>>a;
for(i=0;i<=a;i++)
   {
	if(i%5==0)
	{
		cout<<"\n\nthe number divisible by 5 is : "<<i;
	}
	else
	{
	  cout<<"\n\n the number not divisible by 5 is : "<<i;	
	}
   }
return 0;
}
