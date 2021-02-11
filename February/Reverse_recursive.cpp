# include <iostream>
using namespace std;

int reverse (int );
int p=0;
int main()
{
    int number,rev;
    cout<<"ENTER A NUMBER THAT YOU WANT TO REVERSE:-  "<<endl;
    cin>>number;
    rev = reverse(number);
    cout<<"THE NUMBER AFTER REVERSE IS:-  "<<rev<<endl;
    return 0;
}

int reverse(int num)
{
    if (num==0)
        return p;
    else
       {
        p=((num%10))+(p*10);
        return reverse(num/10);
}
}


