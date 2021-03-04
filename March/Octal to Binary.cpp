#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long binary=0,rem,num,temp=1,z=1;
    cout<<"Enter the number in octal ";
    cin>>num;
    cout<<"Binary equivalent = ";
    while(num>0)
    {
        temp=num%10;
        num/=10;
        for(int y=0;y<3;y++)
        {
             rem=temp%2;
             temp/=2;
             binary+=rem*z;
             z*=10;
        }
    }
    cout<<binary;
    return 0;
}
