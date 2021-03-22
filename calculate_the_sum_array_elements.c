#include<stdio.h>
void array_sum(int arr[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+arr[i];
		printf("\n sum=%d",sum);
	}
	printf("\n Sum of array elements are : %d",sum);
}
int main(){
	int a[10];
	int i,n;
	printf("\n Enter number of values : ");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Array elements are:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	array_sum(a,n);
}
