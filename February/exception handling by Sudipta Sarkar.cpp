#include<iostream>
using namespace std;
void id(int x, int y, int z)
{
    if((x-y) != 0)
    {
        int r = z/(x-y);
        cout<<"The Result is = \t"<<r;
    }
    else
    {
        throw (x-y);
    }
}
int main()
{
    try {
        int a,b,c;

        cout<<"Enter the numbers (a,b,c) = ";
        cin>>a>>b>>c;

       id(a,b,c);

    } catch (int e) {

       cout<<"Error !!!"<<"\t"<<e<<"Is the catch statment";

    }





    return 0;
}
