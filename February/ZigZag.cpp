# include<iostream>
# include <cstring>
# include <string.h>
using namespace std;
int main()
{
    int i,j,p=0;
    char ch[10000];
    cin.getline(ch,10000);
    int a =strlen(ch);
    p=a;
    int rows;
    cout<<"ENTER THE NUMBER OF THE ROW:- "<<endl;
    cin>>rows;
  int coloumns=0,n=0,q=rows-2;
    while (p>0)
    {
      if(n==0)
        {
            n=q;
            coloumns++;
            p=p-rows;
        }
        else
        {
            n=n-1;
            coloumns++;
            p=p-1;
        }
    }
    p=a;
    int k=0;
    n=0;
    char arr[rows][coloumns];
    cin.ignore();
    for(i=0;i<rows;i++)
   {
       for(j=0;j<coloumns;j++)
       {
        arr[i][j]=0;
       k++;
       }
    }
    k=0;
    int lim=0;
    for(j=0;j<coloumns;j++)
     {
        if(n==0)
        {
        for(i=0;i<rows;i++)
       {
           arr[i][j]=ch[lim];

           lim++;
         if(lim==a)
            break;
        }
          n=q;
          p=p-rows;
        }
        else if(n>0)
        {
            arr[n][j]=ch[lim];
            n=n-1;
            p=p-1;
            lim++;
        }
    }
    for(i=0;i<rows;i++)
    {
      for(j=0;j<coloumns;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
   }
    return 0;
}
