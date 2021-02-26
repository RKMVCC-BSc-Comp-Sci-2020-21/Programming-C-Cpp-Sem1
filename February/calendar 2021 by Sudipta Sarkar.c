#include<stdio.h>

void date();
void sp();
void jan();
void feb();
void mar();
void apr();
void may();
void jun();
void jul();
void aug();
void sep();
void oct();
void nov();
void dec();
int main()
{


 printf("\n\t**_________2021_______**\n\n\n\n");

        printf("\t JANUARY\t\n");
    date();
    jan();
    sp();

    printf("\t FEBRUARY\t\n");
    date();
    feb();
    sp();

    printf("\t MARCH\t\n");
    date();
    mar();
    sp();

    printf("\t APRIL \t\n");
    date();
    apr();
    sp();

    printf("\t MAY \t\n");
    date();
    may();
    sp();

    printf("\t JUNE \t\n");
    date();
    jun();
    sp();

    printf("\t JULY \t\n");
    date();
    jul();
    sp();

    printf("\t AUGUST \t\n");
    date();
    aug();
    sp();

    printf("\t SEPTEMBER \t\n");
    date();
    sep();
    sp();

    printf("\t OCTOBER \t\n");
    date();
    oct();
    sp();

    printf("\t NOVEMBER \t\n");
    date();
   nov();
    sp();

    printf("\t DECEMBER \t\n");
    date();
    dec();
    sp();

    printf("\t YEAR END !!!!!\t\n");

    sp();


    return 0;
}

void date()
{
   printf("\n\tSUN \tMON \tTUE \tWED \tTHU \tFRI \tSAT\t\n\n");
}
void sp()
{
    printf("\n\n\n");
}
void jan()
{

    int i;
    printf("\t \t \t \t \t");
    for(i=1;i<=31;i++)
    {
        printf("\t%d",i);

        if(i==2||i==9||i==16||i==23||i==30)
        {
            printf("\n");


        }
    }

}
void feb()
{
    int i;
    printf("\t");
    for(i=1;i<=28;i++)
    {
        printf("\t%d",i);

        if(i==6||i==13||i==20||i==27)
        {
            printf("\n");


        }
    }
}
void mar()
{
    int i;
    printf("\t");
    for(i=1;i<=31;i++)
    {
        printf("\t%d",i);

        if(i==6||i==13||i==20||i==27)
        {
            printf("\n");


        }
    }
}
void apr()
{
int i;
printf("\t \t \t \t");
for(i=1;i<=30;i++)
{
    printf("\t%d",i);

    if(i==3||i==10||i==17||i==24||i==31)
    {
        printf("\n");


    }
}
}
void may()
{
int i;
printf("\t \t \t \t \t \t");

for(i=1;i<=31;i++)
{
    printf("\t%d",i);

    if(i==1||i==8||i==15||i==22||i==29)
    {
        printf("\n");


    }
}
}
void jun()
{
int i;
printf("\t \t");
for(i=1;i<=30;i++)
{
    printf("\t%d",i);

    if(i==5||i==12||i==19||i==26)
    {
        printf("\n");


    }
}
}
void jul()
{
int i;
printf("\t \t \t \t");
for(i=1;i<=31;i++)
{
    printf("\t%d",i);

    if(i==3||i==10||i==17||i==24||i==31)
    {
        printf("\n");


    }
}
}
void aug()
{
int i;
printf(" ");

for(i=1;i<=30;i++)
{
    printf("\t%d",i);

    if(i==7||i==14||i==21||i==28)
    {
        printf("\n");

    }
}

}
void sep()
{
int i;
printf("\t \t \t");
for(i=1;i<=30;i++)
{
    printf("\t%d",i);

    if(i==4||i==11||i==18||i==25)
    {
        printf("\n");


    }
}
}
void oct()
{
int i;
printf("\t \t \t \t \t");
for(i=1;i<=31;i++)
{
    printf("\t%d",i);

    if(i==2||i==9||i==16||i==23||i==30)
    {
        printf("\n");


    }
}
}
void nov()
{
int i;
printf("\t");
for(i=1;i<=30;i++)
{
    printf("\t%d",i);

    if(i==6||i==13||i==20||i==27)
    {
        printf("\n");


    }
}
}
void dec()
{
int i;
printf("\t \t \t");
for(i=1;i<=31;i++)
{
    printf("\t%d",i);

    if(i==4||i==11||i==18||i==25)
    {
        printf("\n");


    }
}
}
