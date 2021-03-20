// WAP to enter the CP and SP to calculate Profit/Loss.

#include <iostream>
using namespace std;

int main()
{
    int CP, SP;

    cout<<"Enter the Selling Price --> ";
    cin>>SP;

    cout<<"Enter the Cost Price --> ";
    cin>>CP;

    if(CP>SP)
        cout<<"\n\tLoss = "<<(CP-SP)<<"\n\n";
    else if(SP>CP)
        cout<<"\n\tProfit = "<<(SP-CP)<<"\n\n";
    else
        cout<<"\n\tNeither Profit Nor Loss!\n\n";

    return 0;
}
