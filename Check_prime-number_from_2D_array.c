/* Prime number from 2D array */
#include <stdio.h>
int check_prime(int n){
	
	int i,prime=1;
	for (i=2;i<=n/2;i++){
	if(n%i==0){
		prime=0;
		break;
	}
}
return(prime);
}
void get_data(int r,int c,int a[][c]){
	int i,j;
	printf("\n Enter array elements:\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int r,int c,int arr[r][c]){
	int i,j;
	printf("\n Array elements are:\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf(" arr[%d][%d]: %d",i,j,arr[i][j]);
			printf("\n");
	}
}
int main(){
	int arr[2][3];
	int i,j;
	get_data(2,3,arr);
	display(2,3,arr);
	printf("\n Prime numbar are:\n ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(check_prime(arr[i][j]))
			printf("%d ",arr[i][j]);
		}
	}
}
