//WAP to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout<<"Enter the X value : ";
    cin>>x;
    cout<<"Enter the Y value : ";
    cin>>y;
    cout<<"\nYou entered the coordinate ("<<x<<","<<y<<")\n\n";

    if((x>0)&&(y>0))
        cout<<"\tThe point lies in the 1st Quadrant.\n\n";
    else if((x<0)&&(y>0))
        cout<<"\tThe point lies in the 2nd Quadrant.\n\n";
    else if((x<0)&&(y<0))
        cout<<"\tThe point lies in the 3rd Quadrant.\n\n";
    else if((x>0)&&(y<0))
        cout<<"\tThe point lies in the 4th Quadrant.\n\n";
    else
        cout<<"\tThe point lies on one of the Axes.\n\n";

    return 0;
}
