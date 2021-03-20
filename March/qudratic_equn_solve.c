//SLOVING QUADRATIC EQUATION
//Name:SOUMYA PAL Roll No:722
 
#include<stdio.h>
#include<math.h>

int main()
{
    double dblA,dblB,dblC,dblD,dblR1,dblR2;
    char ch;
    do{
        printf("Enter the value of A,B,C:");
        scanf("%lf %lf %lf",&dblA,&dblB,&dblC);

        dblD = dblB * dblB - (4 * dblA * dblC);

        if(dblD == 0)
        {
            dblR1=dblR2=((-dblB)/2*dblA);
            printf("the roots are REAL & EQUAL.\n");
            printf("ROOT 1: %lf & ROOT 2: %lf\n",dblR1,dblR2);
        }

        if(dblD > 0)
        {
            dblR1 = (((-dblB) + sqrt(dblD))/ 2 * (dblA));
            dblR2 = (((-dblB) - sqrt(dblD))/ 2 * (dblA));
            printf("the roots are REAL & UNEQUAL.\n");
            printf("ROOT 1: %lf & ROOT 2: %lf\n",dblR1,dblR2);
        }

        if(dblD < 0)
        {
            printf("the roots are IMAGINARY.\n");
        }

        printf("do you want to continue? (Y/N):");
            scanf(" %c",&ch);
        

    } while(((ch == 'y')  || (ch == 'Y')));

    printf("THANK YOU.\n");
    return 0;
}
