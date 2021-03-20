//WAP to convert Indian Rupee to US Dollar for every 5 rupees

#include <iostream>
using namespace std;

int main()
{
    float rup=10, dol;

    cout<<"Currency Chart:\n---------------\n\n";
    for(int i=1; i<=50; i++)
    {
        cout<<i<<") Rs. "<<rup<<" --> ";
        dol = rup * 0.014;
        rup = rup + 5;
        cout<<dol<<" $\n";
    }
    cout<<"\n\n";

    return 0;
}
