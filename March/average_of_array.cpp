//by Dipmalya Hazari
//the average of one dimensional array//
#include <iostream>
using namespace std;

int main(){
	int i;
	int dipmalya[i];
	double total=0;
	cout<<"enter the size of array:";
	cin>>i;
	
	cout<<"enter the numbers:"<<"\n";
	for(int k=0;k<i;k++){
			cin>>dipmalya[k];
}
	for(int k=0;k<i;k++){
		total=total+dipmalya[k];
	}

	cout<<"the sum of arrays:"<<total<<endl;
	cout<<"the average of arrays:"<<total/i<<endl;
	
	return 0; 
}
