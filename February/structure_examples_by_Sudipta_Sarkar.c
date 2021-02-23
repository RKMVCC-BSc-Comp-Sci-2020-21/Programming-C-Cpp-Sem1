#include<stdio.h>

struct student{
    char name[30];
    int roll;
    float mark;
};

int main()
{
    struct student s1,s2,s3;

    printf("Enter Your Name = ");
    scanf("%s",s1.name);

    printf("Enter your Roll No = ");
    scanf("%d",&s1.roll);

    printf("Enter the marks = ");
    scanf("%f",&s1.mark);

    printf("-----Next-----\n");

    printf("Enter Your Name = ");
    scanf("%s",s2.name);

    printf("Enter your Roll No = ");
    scanf("%d",&s2.roll);

    printf("Enter the marks = ");
    scanf("%f",&s2.mark);

    printf("-----Next-----\n");

    printf("Enter Your Name = ");
    scanf("%s",s3.name);

    printf("Enter your Roll No = ");
    scanf("%d",&s3.roll);

    printf("Enter the marks = ");
    scanf("%f",&s3.mark);

    printf("-----print value-----\n");


    printf("\t The first student \n");

    printf("\t Name = %s \t Roll - %d \t Marks - %f \n",s1.name,s1.roll,s1.mark);


    printf("\t The second student \n");

    printf("\t Name = %s \t Roll - %d \t Marks - %f \n",s2.name,s2.roll,s2.mark);



    printf("\t The 3rd student \n");

    printf("\t Name = %s \t Roll - %d \t Marks - %f \n",s3.name,s3.roll,s3.mark);




    return 0;
}
