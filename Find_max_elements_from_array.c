#include <stdio.h>
int find_max(int arr[],int n){
	int max,i;
	max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i])
		max=arr[i];
		printf("\n Max variables updation: %d",max);
	}
	return (max);
}
int main(){
	int a[10];
	int i,n,res;
	printf("\n Enter number of values : ");
	scanf("%d",&n);
	printf("\n Enter array elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Array elements are: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	res=find_max(a,n);
	printf("\n Array elements: %d",res);
}
