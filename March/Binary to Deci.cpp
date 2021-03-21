//Binary to Decimal in C++
#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
 	int num ,rem,des=0,i=0,j=0,temp;
 	char hexa[100];
 	cout<<"Enter any binary number ";
 	cin>>num;
 	temp=num;
 	
 	
 	while (temp>0)
 	{
 		rem=temp%10;
 		des=des+rem*pow(2,i);
 		i++;
 		temp=temp/10;
 		
	}
	 
	cout<<des;
 	return 0;
 }
