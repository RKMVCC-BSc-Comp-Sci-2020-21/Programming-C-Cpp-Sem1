#include<iostream>
using namespace std;
int pow(int ,int);
int isarmstrong(int );
bool isarmstrongg(int , int );

 int main()
 {
    int number;
    cout<<"ENTER THE NUMBER YOU WANT TO CHECK IF IT IS ARMSTRONG NUMBER"<<endl;
    cin>>number;
    int p;
    p= isarmstrong(number);
   if(isarmstrongg(number,p)==true)
       cout<<"THE NUMBER IS AN ARMSTRONG NUMBER"<<endl;
   else
       cout<<"THE NUMBER IS NOT AN ARMSTRONG NUMBER"<<endl;
     return 0;

 }
 int isarmstrong(int num)
 {
     int a,b=0,c=0,d=0,armstrong=0;
     a=num;
     d=3;
     while(a>0)
       {
            b=a%10;
            c=pow( b,3 );
            armstrong=armstrong+c;
            a=a/10;
       }

       return armstrong;
 }
int pow(int nu ,int po)
{
     if(po==0)
       return 1;
   else
   {
       po--;
       return nu *pow(nu,po);
   }
}
bool isarmstrongg(int num,int p)
{
   if(p==num)
       return true;
   else
       return false;
}
