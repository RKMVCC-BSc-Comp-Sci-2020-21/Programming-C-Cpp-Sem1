//9. C/C++ Program to find two's complement of a binary number

//10 C/C++ Program to find reverse of any number using recursion.
#include<iostream>
#include<math.h>

using namespace std;
     

int main()
{
    int num, rev;
	int reverse(int);     

	

    cout<<"\n\tEnter any number : ";
    cin>>num;
     
    rev = reverse(num);
        cout<<"\n\tReverse is : "<<rev;
     
	return 0;
}
     
int reverse(int num)
{
	int digit = (int)log10(num);
          
    if(num == 0)
        return 0;
     
    return((num%10 * pow(10, digit)) + reverse(num/10));
}
