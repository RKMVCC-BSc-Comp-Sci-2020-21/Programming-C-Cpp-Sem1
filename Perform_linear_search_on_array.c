#include<stdio.h>
void get_data(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
}
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
int Isearch(int arr[],int n,int key){
	int i,found=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key){
			found=1;
			break;
		}
	}
	return (found);
}
int main(){
	int arr[10];
	int n,key,s;
	printf("\n Enter number of elements: ");
	scanf("%d",&n);
	get_data(arr,n);
	printf("\n Array elements are:");
	display(arr,n);
	printf("\n Searched Key: ");
	scanf("%d",&key);
	s=Isearch(arr,n,key);
	if(s==1)
	printf("\n key elements found");
	else
	printf("\n Key not found");
	return 0;
}
