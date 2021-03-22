//By Dipmalya Hazari
#include <iostream>
using namespace std;

int main(){
	
	int n,i;
	
	cout<<"enter the integer:";
	cin>>n;
	
	if(n>0){
	for(int i=1;i<n;i++){
	int	b=n/i;
	
	if(b==10 && n%i==0){
	cout<<"The number is Duck number";
	}	
		}
		
	}
	else{
	
	cout<<"The number is not duck number";
}
	
	return 0;
}
