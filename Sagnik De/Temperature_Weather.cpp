/* WAP to read temperature in centigrade and display a suitable message according to temperature state below :
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/


#include <iostream>
using namespace std;

int main()
{
    double Temp;

    cout<<"Enter the Temperature in Celcius : ";
    cin>>Temp;

    if (Temp<0)
        cout<<"\n\tFreezing weather\n\n";
    else if ((Temp>=0)&&(Temp<10))
        cout<<"\n\tVery Cold weather\n\n";
    else if ((Temp>=10)&&(Temp<20))
        cout<<"\n\tCold weather\n\n";
    else if ((Temp>=20)&&(Temp<30))
        cout<<"\n\tNormal weather\n\n";
    else if ((Temp>=30)&&(Temp<40))
        cout<<"\n\tIt's Hot\n\n";
    else
        cout<<"\n\tIt's Very Hot\n\n";

    return 0;
}
