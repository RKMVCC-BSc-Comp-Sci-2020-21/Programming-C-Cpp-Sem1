#include<iostream>
using namespace std;
int main()
{
 int i,j,g,h=5,k=7,l=5,m,n=5,o=2,p=1,q=2,rows,t=2,tt=1;
 cout<<"ENTER THE NUMBER OF THE ROWS"<<endl;
 cin>>rows;
 for(i=0;i<3;i++)
 {
 for(i=1;i<=5;i++)
 {
     cout<<"        ";
     g=5;
     for(j=1;j<=i;j++)
     {
         if(g==5||g==3||g==1)
             cout<<"*"<<" ";
         else
             cout<<" "<<" ";
         g--;

     }
     for(j=k;j>=1;j--)
     {
         if(l==5||l==3||l==1)
             cout<<"*"<<" ";
         else
             cout<<" "<<" ";
     }
     k=k-2;
       l=l-1;
    for(j=h;j<=5;j++)
    {
        if(j==1)
            continue;
        if(j==5||j==3||j==1)
            cout<<"*"<<" ";
        else
            cout<<" "<<" ";
    }
       h=h-1;

       cout<<endl;

 }
 for(i=1;i<=5;i++)
 {
 m=5;
 for(j=n;j>1;j--)
 {
     if(m==1)
         continue;
     if(m==5||m==3||m==1)
         cout<<"*"<<" ";
     else
         cout<<" "<<" ";
      m--;
 }
 n--;
 for(j=1;j<=p;j++)
 {
     if(i==5)
         continue;
     if(o==5||o==3||o==1)
         cout<<"*"<<" ";
     else
         cout<<" "<<" ";
 }
 o++;
p=p+2;
for(j=5;j>tt;j--)
{
    if(q==5||q==3||q==1)
        cout<<"*"<<" ";
    else
        cout<<" "<<" ";
    q++;
}
t++;
tt++;
q=0;
q=t;
  cout<<endl;
 }
 }
    return 0;
}
