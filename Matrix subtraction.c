#include<stdio.h>
#include<stdlib.h>
int get_data(int r,int c,int *A[]){
	int i,j;
	printf("\n Enter array elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter [%d][%d] element:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
}
void display(int r,int c,int *A[]){
	int i,j;
	printf("\n Array elements are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
void subtraction(int r,int c,int *A[],int *B[]){
	int **R;
	int i,j;
	R=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	    R[i]=(int*)malloc(c*sizeof(int));
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			R[i][j]=A[i][j]-B[i][j];
		}
	}
	printf("\n after addition: \n ");
	display(r,c,R);    
}
int main(){
	int **A,**B;
	int r,c,i;
	printf("Enter #rows:");
	scanf("%d",&r);
	printf("Enter #rcolumns:");
	scanf("%d",&c);
	A=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	    A[i]=(int*)malloc(r*sizeof(int));
	B=(int**)malloc(r*sizeof(int*));
	for(i=0;i<c;i++)
	    B[i]=(int*)malloc(r*sizeof(int));
	get_data(r,c,A);
	get_data(r,c,B);
	display(r,c,A);
	display(r,c,B);
	subtraction(r,c,A,B);    
}
