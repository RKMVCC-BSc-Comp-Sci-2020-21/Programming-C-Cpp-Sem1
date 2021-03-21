//Octal to binary
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num,dec = 0, rem = 0,place =0 ;
	long bin = 0;
	
	cout<<"Enter an octal number ";
	cin>>num;
	
	cout<<"Binary equivalent of octal number %d is ", num;
	while(num)
	{
		rem = num %10;
		dec = dec + rem * pow (8 , place);
		num= num / 10;
		place++;
	}
	place = 1;
	rem = 0;
	while (dec)
	{
		rem = dec % 2;
		bin = bin+(rem * place);
		dec = dec / 2;
		place = place * 10;
	}
	
	cout << "%ld\n", bin ;
	return 0;
}
