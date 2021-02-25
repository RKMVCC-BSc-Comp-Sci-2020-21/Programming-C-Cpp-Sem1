#include<iostream>

using namespace std;

int main(){

    int x, y;

    cout<<"Enter coordinates : ";

    cin>>x>>y;


    if(x == 0){

        cout<<x<<","<<y<<" lies on y axis \n";

    }else if(y == 0){

        cout<<x<<","<<y<<" lies on x axis \n";

    }else if(x>0 && y>0){

        cout<<x<<","<<y<<" lies in 1st quadrant \n";

    }else if(x<0 && y>0){

        cout<<x<<","<<y<<" lies in 2nd quadrant \n";

    }else if(x<0 && y<0){

        cout<<x<<","<<y<<" lies in 3rd quadrant \n";

    }else if(x>0 && y<0){

        cout<<x<<","<<y<<" lies in 4th quadrant \n";

    }else{

        cout<<x<<","<<y<<" lies on the origin \n";

    }

    return 0;

}
