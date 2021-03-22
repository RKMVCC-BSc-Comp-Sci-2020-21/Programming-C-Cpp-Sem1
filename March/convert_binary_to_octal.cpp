#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long octal=0,rem,num,temp=1,z=0;
    cout<<"Enter the number in binary ";
    cin>>num;
    while(num>0)
    {
        for(int y=0;y<3;y++)
        {
             rem=num%10;
             num/=10;
             octal+=rem*pow(2,y);
       }
       z+=octal*temp;
       octal=0;
       temp*=10;
    }
    cout<<"Octal equivalent "<<z;
    return 0;
}
//by Dipmalaya Hazari//
