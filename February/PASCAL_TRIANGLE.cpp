//PASCAL'S TRIANGLE by SOUBHAGYA PAUL

#include <iostream>

using namespace std;

int main()
{
 
 int a[100];
 int n,i,j;

 cout<<"NUMBER OF LINE(S) ? (SHOULD BE LESS THAN 12): ";

 //ENTERING THE NUMBER OF LINES:

 do
 {
  cin>>n;
  if(n<1 || n>11)
	{cout<<endl;
	 cout<<"ERROR!!ENTER AGAIN!";
	}
 }while (n<1 || n>11);

 cout<<endl;

 //GENERATING THE TRIANGLE BY A NESTED LOOP

 a[0]=1;

 for(i=0;i<n;i++)
  { cout<<endl;

	 for(j=0;j<32-(i*3);j++)
		 cout<<" ";

	 for(j=0;j<=i;j++)
		{cout<<a[j]<<"   ";

		 if(a[j]<100)
			cout<<" ";

		 if(a[j]<10)
			cout<<" ";
		}

	 for(j=i+1;j>0;j--)
		{
		 if(j==0 || j==i+1)
			a[j]=1;
		 else
			a[j]=a[j-1]+a[j];
		}
  }
 return 0;
}
