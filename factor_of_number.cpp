
//By Dipmalya Hazari
#include <iostream>
using namespace std;


int main(){
	int n=0;
	
	cout<<"enter a number:"<<endl;
	cin>>n;
	
	cout<<"the factors of"<<" "<<n<<" is";
	
	for(int i=1;i<<10;i++){
		int b=0;
		b=n/i;
		if(n%i==0){
			
			cout<<" "<<b;
		}
	}
}
