#include<stdio.h>
struct student{
	int roll;
	int marks;
};
int main(){
	struct student joydipta,sourav;
	printf("\n Enter joydipta record:");
	printf("\n Enter roll:");
	scanf("%d",&joydipta.roll);
	printf("\n Enter marks:");
	scanf("%d",&joydipta.marks);
	printf("\n Enter sourav record:");
	printf("\n Enter roll:");
	scanf("%d",&sourav.roll);
	printf("\n Enter marks:");
	scanf("%d",&sourav.marks);
	
	printf("\n Joydipta : roll: %d marks: %d",joydipta.roll,joydipta.marks);
	printf("\n Sourav : roll: %d marks: %d",sourav.roll,sourav.marks);
}
