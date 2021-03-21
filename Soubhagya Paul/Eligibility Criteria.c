/*
10. Write a C/C++ program to find the eligibility of admission for a professional course based on the following criteria.
 
Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>

int main()
{
	int math,phy,chem,total,c;
	printf("\n\tEnter the number of math : ");
	scanf("%d",&math);
	printf("\n\tEnter the number of physics : ");
	scanf("%d",&phy);
	printf("\n\tEnter the number of chemistry : ");
scanf("%d",&chem);
	total = math+phy+chem;
c=math+phy;
	printf("\n\tTotal of three subject ; %d",total);
	printf("\n\tTotal of physics and math : %d",c);
	

if(math>=65 && phy>=55 && chem >=50 && total>=190 && math+phy>=140)
	printf("\n\tEligable for admission.");
	else 
	printf("\n\tNot eligable.");
	return 0;
}
