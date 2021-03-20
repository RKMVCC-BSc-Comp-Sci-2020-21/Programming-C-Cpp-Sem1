//WAP to convert Fahrenheit to Celcius for every 5 degree

#include <iostream>
using namespace std;

int main()
{
    float cel, i;

    cout<<"Temperature Chart:\n------------------\n\n";
    for(i=0; i<=100; i=i+5)
    {
        cout<<i<<" F --> ";
        cel = (i-32)*5/9;
        cout<<cel<<" C\n";
    }
    cout<<"\n\n";

    return 0;
}
