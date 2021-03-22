#include <stdio.h>
struct student{
	int roll;
	int marks;
};
int main(){
	struct student gourab,arijit;
	printf("\n Student records");
	gourab.roll=1;
	gourab.marks=100;
	arijit.roll=2;
	arijit.marks=99;
	printf("\n Gourab : roll: %d marks: %d ",gourab.roll,gourab.marks);
	printf("\n Arijit : roll: %d marks: %d ",arijit.roll,arijit.marks);
	
}
