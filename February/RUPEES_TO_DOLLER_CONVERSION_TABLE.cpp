#include <iostream>

using namespace std;

int main(){

   int rs = 10;

   double doller = 0;

   cout<<"Rupees to doller convertion : \n";

   for(int i = 0;i < 50;i++){

       doller = rs*73.685;

       cout<<rs<<" Rs. = "<<doller<<" $"<<endl;

       rs = rs+5;

   }

   return 0;
}
