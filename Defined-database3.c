#include<stdio.h>
struct student{
	int roll;
	int marks;
};
int main(){
	int i,n;
	struct student arr[10];
	printf("\n Number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter roll:");
		scanf("%d",&arr[i].roll);
		printf("\n Enter marks:");
		scanf("%d",&arr[i].marks);
	}
	printf("\n Student record:");
	for(i=0;i<n;i++){
		printf("\n Roll : %d and Marks: %d",arr[i].roll,arr[i].marks);
	}
}
