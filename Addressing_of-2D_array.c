#include<stdio.h>
int main(){
	
	int i,j;
	int student[4][2]={{1234,95},{1235,90},{1236,91},{1237,93}};
	for(i=0;i<4;i++){
		printf("\n student[%d]:Addrress: %u",i,student[i]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("\n student [%d][%d] : Address : %u and Value : %d",i,j,&student[i][j],student[i][j]);
		}
	}
}
