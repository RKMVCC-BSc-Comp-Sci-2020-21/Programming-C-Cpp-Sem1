# include<iostream>
using namespace std ;
int main()
{
    int a,b,c,d,num,e,f,i,j;
    cout<<"ENTER THE NUMBERS OF ELEMENTS IN THE BINARY"<<endl;
    cin>>num;
   int arr[num];
   for(i=0;i<num;i++)
   {
       cin>>arr[i];

   }
   for(i=0;i<num;i++)
   {
  b=arr[i];
       if(b>1)
   {
           if(b<0)
           {
       cout<<endl<<"YOU HAVE PROVIDED ME WITH A WRONG INPUT . PLEASE RECTIFY IT"<<endl;
       return 0;
           }
   }
   }
   int arr1[num];
   int t=0;
     for(i=num-1;i>=0;i--)
     {
         if(arr[i]==0&&t==0)
         {
              arr1[i]=arr[i];
         }
         else if(arr[i]==1&&t==0)
         {
              if(t==0)
              {
             t=1;
              arr1[i]=arr[i];
        }
              }

        else if(t==1)
         {
                       if(arr[i]==0)
                     arr1[i]=1;
                 else
                     arr1[i]=0;
         }
     }
    cout<<"THE TWO'S COMPLEMENT FOR THE ABOVE BINARY NUMBER IS :- "<<endl;
    cout<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<endl;
     for(i=0;i<num;i++)
     {
         cout<<arr1[i]<<"  ";
            }
     cout<<endl<<endl<<"*********************************************************"<<endl;
               return 0;
}
