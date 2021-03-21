

# include <iostream>
using namespace std;
int main()
{
 int cp,sp,profit, loss;
 cout <<"enter cost price:"<<endl;
 cin>>cp;
 cout <<"enter selling price:"<<endl;
 cin>>sp;
 if(sp>cp)
 {
 profit=sp-cp;
 cout<<"profit: "<<profit<<endl;
 }
 else if(cp>sp)
{
 loss=cp-sp;
 cout<<"loss of: "<<loss<<endl;
}
else
{
 cout<<"no profit no loss.";
}
}
