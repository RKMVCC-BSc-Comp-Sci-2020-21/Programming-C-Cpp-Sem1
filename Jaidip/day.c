/* A program to find day of a given date */
#include<stdio.h> 

int dayofweek(int d, int m, int y) 
{ 
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; 
} 

/* Driver function to test above function */
int main() 
{ 
	

    int dd,mm,yy;
    printf("Enter day: ");
    scanf("%d",&dd);
    printf("Enter month: ");
    scanf("%d",&mm);
    printf("Enter year: ");
    scanf("%d",&yy);

    int day = dayofweek(dd, mm, yy); 
    
	switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        break;
    }

	return 0; 
} 
