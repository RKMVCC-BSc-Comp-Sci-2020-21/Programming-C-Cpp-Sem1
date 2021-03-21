

#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
			
        cout<<" Input the radius of the circle : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The perameter of the circle is : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }
