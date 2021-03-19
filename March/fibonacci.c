//FIBONACCI SERIES
//Name:SOUMYA PAL Roll No:722

#include <stdio.h>

int main()
{
    int intK,intN,flag;
    long int lngA,lngB,lngC,lngD;
    char ch;

    do{

        do{
            flag=0;
            printf("enter the number(0<N<45):");
            scanf("%d",&intN);
            if((intN<=0) || (intN >= 45))
                flag=1;
        }while(flag);

        lngA=0;
        lngB=1;
        printf("fibonacci series:\n");

        for(intK=1;intK<=intN;intK++)
        {
            printf("%d th trem is:%ld\n",((intK * 2)-1),lngA);
            if (((intK * 2)-1) == intN)
            break ;
            printf("%d th term is:%ld\n",(intK * 2),lngB);
            if ((intK * 2) == intN)
            break;
            lngC = lngA + lngB;
            lngD = lngB + lngC;
            lngA = lngC;
            lngB = lngD; 
        }
        printf(" do u want to continue? (Y/N) :");
        scanf(" %c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));

    printf("THANK YOU.\n");
    return 0;
}
