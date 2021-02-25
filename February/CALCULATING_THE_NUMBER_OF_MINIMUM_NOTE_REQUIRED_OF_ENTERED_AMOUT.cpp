#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int tt_n,fh_n,th_n,oh_n,fy_n,ty_n,tn_n,f_c ;

    long int total;

    cout<<"Enter the amount of money (Rs.): ";

    cin>>total;



        tt_n = total/2000;

        total = total%2000;

        fh_n = total/500;

        total = total%500;

        th_n = total/200;

        total = total%200;

        oh_n = total/100;

        total = total%100;

        fy_n = total/50;

        total = total%50;

        ty_n = total/20;

        total = total%20;

        tn_n = total/10;

        total = total%10;

        f_c = total/5;



    cout<<"The number of minimum note required of - \n"
         "2000 Rs.  "<<tt_n<<"\n"
         " 500 Rs.  "<<fh_n<<"\n"
         " 200 Rs.  "<<th_n<<"\n"
         " 100 Rs.  "<<oh_n<<"\n"
         "  50 Rs.  "<<fy_n<<"\n"
         "  20 Rs.  "<<ty_n<<"\n"
         "  10 Rs.  "<<tn_n<<"\n"
         "   5 Rs.  "<<f_c<<"\n";

    return 0;

 }
