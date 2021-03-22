/* Use Macro for statement */
#include<stdio.h>
#define KEYFOUND printf("\n key element found");
#define KEYNOTFOUND printf("\n key element not found");
int main(){
	int a[]={10,20,30,40,50};
	int key=30,f=0,i;
	for(i=0;i<5;i++){
		if(a[i]==key){
			f=1;
			break;
		}
	}
	if(f==1) KEYFOUND
	else KEYNOTFOUND
}
