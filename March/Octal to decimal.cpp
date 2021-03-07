#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num, temp, rem, oct = 0, i = 0;
    clrscr(); 
    cout<<"Enter any Octal Number: ";
    cin>>num;
    temp = num;
    while(temp != 0)
    {
     rem = temp % 10;
     oct += rem * pow(8, i++);
     temp = temp / 10;
    }
    cout<<"\nDecimal Equivalent of " << num << " is : " << oct;
    getch();
}
