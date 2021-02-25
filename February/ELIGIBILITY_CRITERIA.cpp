#include <iostream>

using namespace std;

int main(){

    float math,phy,chem;

    bool is_eligable = false;

    cout<<"Enter the number of the candidate in - ";

    cout<<"\n Mathematics : ";

    cin>>math;

    cout<<"\n Physics : ";

    cin>>phy;

    cout<<"\n Chemistry : ";

    cin>>chem;

    if((math+phy+chem)>=190 ||(math+phy)>=140){

            if(math>=65 && phy>=55 && chem>= 50){

                is_eligable = true;

            }

    }

    if(is_eligable == true){

        cout<<"The candidate is eligible for admission \n ";

    }else{

        cout<<"The candidate is not eligible for admission \n ";

    }

    return 0;

}
