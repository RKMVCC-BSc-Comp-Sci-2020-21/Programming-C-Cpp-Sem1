//by Dipmalya Hazari//
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long i,hexa[20],rem,binary[4],z=1;
    char input[20];
    cout<<"Enter the number in Hexadecimal : ";
    gets(input);
    cout<<"Binary equivalent : ";
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]>='A')
            hexa[i]=input[i]-55;
        else if(input[i]>='a')
            hexa[i]=input[i]-87;
        else
            hexa[i]=input[i]-48;
        for(int y=0;y<4;y++)
        {
            binary[y]=hexa[i]%2;
            hexa[i]/=2;
        }
        for(int y=3;y>=0;y--)
            cout<<binary[y];
    }
    return 0;
}
