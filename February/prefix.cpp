//CODED BY SUMIT SAHA .STUDENT OF THE RKMVCC
//PROGRAM TO CALCULATE THE MAXIMUM OF THE PREFIX OF THE CURRENT INDEX ELEMENT IN THE ARRAY
PROGRAM CODE:
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"ENTER THE NUMBER OF THE ELEMENTS YOU WANT TO ENTER IN AN ARRAY"<<endl;
    cin>>a;
    int arr[a];
//**********************************************************************************
//takeing the input of the array elements.
    cout<<"ENTER THE ELEMENTS YOU WANT TO PUT IN THE ARRAY"<<endl;
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        }
//*************************************************************************************
   //printing the array elements.
    cout<<"THE ARRAY ENMTERED BY YOU IS PRINTED BELOW .CHECK IT."<<endl;
    for(i=0;i<a;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
//**************************************************************************************
    //main program body.
   cout<<"THE REQUIRED REASULT THAT YOU WANT IS"<<endl;
   cout<<arr[0]<<"  ";
         for(i=1;i<a;i++)
            {
                   int arr1[i];
       for(h=0;h<=i;h++)
            {
             arr1[h]=arr[h];
                     }

       for(j=0;j<=i;j++)
     {
        for(g=j;g<=i;g++)
        {
            if(arr1[g]< arr1[j])
            {
              d=arr1[g];
              arr1[g]=arr1[j];
              arr1[j]=d;
            }
        }
   }


    cout<<arr1[i]<<"  ";
    }

    return 0;}
