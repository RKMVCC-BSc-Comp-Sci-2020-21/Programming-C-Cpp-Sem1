// CODED BY SUMIT SAHA . STUDENTS OF RKMVCC.

//PROGRAM TO FIND OUT THE MIDIAN ARRAY VALUE IN WHICH THE ARRAY IN TURN IS BEING
//CONSTRUCTED WITH THE COMBINATION OF THE TWO SORTED ARRAYS AND AFTER MERGEING THE
//MAIN ARRAY HAS TO BE SORTED AGAIN

//PROGRAM CODE:-

#include<iostream>
using namespace std;
void selectionsortmidvalue(double arr[],int size);
int main()
{
    int size,size1;
    cout<<"ENTER THE LENGTH OF THE ARRAY"<<endl;
    cin>>size;
    cout<<"ENTER THE LENGTH OF THE ARRAY 1"<<endl;
    cin>>size1;
    double arr[size];
    double arr1[size1];
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    int i ;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   cout<<"ENTER THE ARRAY 1 ELEMENTS "<<endl;
   for(i=0;i<size1;i++)
   {
       cin>>arr1[i];
   }
   selectionsortmidvalue(arr,size);
selectionsortmidvalue(arr1,size1);
double arr2[size+size1];
  int k=0;
  for(i=0;i<size;i++)
  {
      arr2[i]=arr[i];
  }
  for(i=size;i<size+size1;i++)
  {
      arr2[i]=arr1[k];
      k++;
  }
  double midofbothhthesortedarray;
   if(((size+size1)-1)%2==0)
   {
       midofbothhthesortedarray=arr2[(((size+size1)-1)/2)];
   }
   else
   {
       midofbothhthesortedarray=(arr2[(((size+size1)-1)/2)]+arr2[(((size+size1)-1)/2)+1])/2;
   }
   cout<<endl<<"THE MID OF BOTH THE ARRAY IS :- "<<endl;
   cout<<midofbothhthesortedarray<<endl;
    return 0;
}
void selectionsortmidvalue(double arr[],int size)
{
    int i,j,l;
   // double k;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                l=arr[i];
                arr[i]=arr[j];
                arr[j]=l;
            }
        }
    }

}
