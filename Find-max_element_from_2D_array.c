#include<stdio.h>
int main(){
	int arr[2][3];
	int i,j,max;
	printf("\n Enter array elements:\n ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n Array elements are:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		    printf(" arr[%d][%d]: %d",i,j,arr[i][j]);
		printf("\n");
   }
   max=-1;
   for(i=0;i<2;i++){
   	for(j=0;j<3;j++){
   		if(max<arr[j][j])
   		    max=arr[i][j];
   		    
	   }
   }
   printf("\n Max elements: %d",max);
   
}
