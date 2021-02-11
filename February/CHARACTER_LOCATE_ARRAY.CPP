#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=0,size;
    cout<<"ENTER THE LENGTH OF THE CHARACTER ARRAY"<<endl;
    cin>>size;
    char ch[size];
    cout<<"ENTER THE LINE OF TEXT THAT YOU WANT TO TAKE"
          " AS THE INPUT IN CH CHARACTER ARRAY"<<endl;
     cin.ignore();
    cin.getline(ch,size);
    char ch1;
    cout<<"ENTER THE CHARACTER OF YOUR CHOICE.BUT PLACE A CORRECT CHOICE"<<endl;
    cin>>ch1;
    int arr[size];
    for(i=0;i<size;i++)
    {
       if(ch1==ch[i])
        {
            arr[k]=i;
            k++;
           }
       }
    if(k==0)
    {
        cout<<"NONE OF THE CHARACTERS IN THE INPUT OF THE "
              "TEXT MATCHED WITH THE DESIRED CHARACTER INPUT.KINDLY"
              "ENTER THE RIGHT INPUT."<<endl;
        return 0;
    }
    int z=strlen(ch);
    int p=0,r=0,q=1,t;
    int arr2[size];
    for(i=0;i<k;i++)
    {
   p=arr[i];
          for(t=r;t<=p;t++)
          {
            if(arr[i]==t)
               {
                 arr2[p]=0;
              for(j=p-1;j>=r;j--)
            {
                  arr2[j]=q;
            q++;
            }
             }
          }
          q=1;
          r=0;
          r=r+p+1;
    }
    if(r<z)
    {
        int y=1;
        for(i=r;i<z;i++)
        {
            arr2[i]=y;
            y++;
        }
    }
    int arr3[size];
     p=0,r=0,q=1,t=0;
     for(i=0;i<k;i++)
     {
    p=arr[i];
     for(t=r;t<=p;t++)
           {
             if(arr[i]==t)
                {
                 if(i==0)
                 {
                     arr3[p]=0;
                  for(j=p-1;j>=r;j--)
                {
                      arr3[j]=q;
                q++;
                }
                 }
                 else {
                     arr3[p]=0;
               for(j=r;j<=p-1;j++)
             {
                   arr3[j]=q;
             q++;
             }
              }}
           }
           q=1;
           r=0;
           r=r+p+1;
     }
     if(r<z)
     {
         int y=1;
         for(i=r;i<z;i++)
         {
             arr3[i]=y;
             y++;
         }
     }
    int arr4[size];
     for(i=0;i<strlen(ch);i++)
     {
         if(arr2[i]>arr3[i])
         {
             arr4[i]=arr3[i];
         }
         else if(arr2[i]<arr3[i])
         {
             arr4[i]=arr2[i];
         }
         else
             arr4[i]=arr2[i];
     }
     cout<<"THE SHORTEST DISTANCE BETWEEN THE CHARACTERS IN THE ARRAY "
           "WITH REPECT TO THE CHARACTER INPUT ARE HEREBY PRINTED ON YOUR SCREEN"<<endl;
     cout<<endl;
     for(i=0;i<strlen(ch);i++)
     {
         cout<<arr4[i]<<"  ";
     }
     cout<<endl;
    return 0;
}
