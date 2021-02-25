#include <iostream>

using namespace std;

int main(){

   int s = 0;

   cout<<"Enter a number(seconds) : ";

   cin>>s;

   if(s<60){

       cout<<s<<" seconds \n";


   }else if(s>=60 && s<3600){

       int m = s/60;

       if(m!=0){

             cout<<m<<" minutes ";
       }

       s = s%60;

       if(s!=0){

             cout<<s<<" seconds \n";
       }



   }else{

       int h = s/3600;

       cout<<s<<" seconds = "<<h<<" hours ";

       s = s%3600;

       if(s<60 && s>0){

           cout<<s<<" seconds \n";

       }else{

           int m = s/60;

           if(m!=0){

                 cout<<m<<" minutes ";
           }

           s = s%60;

           if(s!=0){

                 cout<<s<<" seconds \n";
           }
       }
  }

   return 0;
}
