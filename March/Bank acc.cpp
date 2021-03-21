#include<iostream>
#include<string>
#include<ctime>
#include<omp.h>
using namespace std;
int main()
{
   string s1 = "41861011";
   long long acNum[5000];

   srand(time(NULL));
//#pragma omp parallel for
   for(int i=0;i<=4999;i++)
   {
       int number = (rand() % 9000) + 1000;
       string s2= to_string(number);
       string s3= s1+s2;
       acNum[i]= stoll(s3);

   }
//#pragma omp parallel for
   for(int j=0;j<=4999;j++)
   {
       cout<<acNum[j]<<endl;
   }

   return 0;


}
