 # include <iostream>
 #include<math.h>
 using namespace std;
 
 int main()
 {
 	int num ,rem,des=0,i=0,j=0,temp;
 	char hexa[100];
 	cout<<"Enter any binary number ";
 	cin>>num;
 	temp=num;
 	while (temp>0)
 	{
 		rem=temp%10;
 		des=des+rem*pow(2,i);
 		i++;
 		temp=temp/10;
 		
	 }
	 i=0;
	 rem=0;
	 while(des>0)
	 {
	 	rem=des%16;
	 	if(rem<10)
	 	{
	 		hexa[i]=rem+40;
	 		
		}	
	    else
	    {
		
		 	hexa[i]=rem+55;
		 	
		}
		 i++;
		 des=des/16;
		 
	 }
	 for (j=i-1;j>=0;j--)
	 {
	 	cout<<hexa[j];
	 }
	 return 0;
 
 }
