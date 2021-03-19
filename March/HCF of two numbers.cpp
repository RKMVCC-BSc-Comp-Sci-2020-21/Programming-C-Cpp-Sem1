#include<iostream>
using namespace std;
int main()
{
 int no1,no2,m=1;
 cout<<"Enter first number\n";
 cin>>no1;
 cout<<"Enter second number\n";
 cin>>no2;
 for(int i=1;i<=no1;i++)
 {
 	if(no1%i==0&&no2%i==0)
 	m=i;
 }
 cout<<"HCF of "<<no1<<" and "<<no2<<" is "<<m;
}
