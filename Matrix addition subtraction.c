#include<stdio.h>
int get_data(int r,int c,int A[][c]){
	int i,j;
	printf("\n Enter array elements:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter [%d][%d] element:",i,j);
			scanf("%d",&A[i][j]);
        }
	}
}
void display(int r,int c,int A[][c]){
	int i,j;
	printf("\n Array elements are:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",A[i][j]);
        }
        printf("\n");
	}
}
void addition(int r,int c,int A[r][c],int B[r][c]){
	int R[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			R[i][j]=A[i][j]+B[i][j];
	    }
	}
	printf("\n After addition:\n ");
	display(3,3,R);
}
void subtraction(int r,int c,int A[r][c],int B[r][c]){
	int R[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			R[i][j]=A[i][j]- B[i][j];
	    }
	}
	printf("\n After subtraction: \n ");
	display(3,3,R);
}
int main(){
	int A[3][3],B[3][3];
	get_data(3,3,A);
	get_data(3,3,B);
	display(3,3,A);
	display(3,3,B);
	addition(3,3,A,B);
	subtraction(3,3,A,B);
}
