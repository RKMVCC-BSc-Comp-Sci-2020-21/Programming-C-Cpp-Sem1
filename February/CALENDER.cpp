//CODED BY SUMIT SAHA.STUDENT OF RKMVCC.
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
void monthcalender(string , int , int );
int main()
{
    int year,a;
    cout<<"ENTER A YEAR BETWEEN 2000 TO 2099"<<endl;
    cin>>year;
    int testin = (year-1)-2000;
    string arr[]={"MONDAY","TUESDAY","WEDNESDAY","THRUSDAY","FRIDAY","SATURDAY","SUNDAY"};
    string ntr;
    int ff=testin / 4;
    int pnt =testin - ff;
    int api=(((ff*2)+pnt)+1)%7;
    if(api==0)
    {
        ntr=arr[6];
        a=6;
    }
    else
    {
    ntr=arr[api-1];
   a=api-1;
    }
  cout<<a<<endl;
  monthcalender(ntr,a ,year);
    cout<<arr[api-1];
    return 0;
}
void monthcalender(string poe,int p ,int year1)
{
    int i,j,pp=1,o,q;
    int k=0;//position of the first day of the year
    string str =poe;
     string arr[]={"MONDAY","TUESDAY","WEDNESDAY","THRUSDAY","FRIDAY","SATURDAY","SUNDAY"};
   int yer = year1;
   int l;
   if(yer%4==0)
       l=29;
   else
       l=28;
   //if(yer%4==0)
   //{
/*int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
   }
   else
   {
     int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
   }*/
       int days_in_month[]={31,l,31,30,31,30,31,31,30,31,30,31};
     string months[] = {"January", "February", "March", "April", "May", "June",  "July", "August", "September", "October", "November", "December" };
     int calen[6][7];
     q=p;
     for(i=0;i<6;i++)
         {
            for(j=0;j<7;j++)
             {
     calen[i][j]=0;
             }
         }
for(int a=0;a<=11;a++)
   {
     cout<<"*****************    "<<  months[a]<<"  *************************    " <<endl;
   for(i=0;i<7;i++)
    {
        cout<<"   "<<arr[i]<<"";
    }
    cout<<endl;
o=days_in_month[a];
    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
          if(i==0&&j<q)
              calen[i][j]=0;
          else
          {
          if(pp<=o)
              {
              calen[i][j]= pp;
               pp++;
             }
              else
                  break;
          }
        }
        if(pp>o)
           break;
    }
    q=0;
  int ntr;
       for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==4)
        {
            if(calen[i][j]!=0)
            k++;
            else if (calen[i][j]==0)
            {
            ntr=1;
             break;
            }
        }
         if(i==5)
        {
            if(calen[i][j]!=0)
                k++;
         else if (calen[i][j]==0)
            {
            ntr=1;
             break;
            }

            }
        if(k==7)
        k=0;
            cout<<setw(10)<<calen[i][j];
        }
 cout<<endl;
    }
for(i=0;i<6;i++)
    {
       for(j=0;j<7;j++)
        {
calen[i][j]=0;
        }
    }
q=k;
 k=0;
   pp=1;
   }
}

