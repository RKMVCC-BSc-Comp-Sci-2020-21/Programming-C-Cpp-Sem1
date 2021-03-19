//SUM OF N NUMBERS
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>

int main()
{
    int intCounter,flag, N;
    unsigned long int ulongSum=0;
    char ch;
    do{

        do{
            flag=0;
            printf("the enter number N is (0<N<10000000001):");
            scanf("%d",&N);
            if((N <=0) || (N > 10000000001))
                flag=1;
        }while(flag);

        for(intCounter=0;intCounter<=N;intCounter ++)
        {
            ulongSum=ulongSum+intCounter;
        }

        printf("the required sum is:%ld\n",ulongSum);
        printf("do u want to continue? (Y/N):");
          scanf(" %c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));

    printf("thank u.\n");
    return 0;
}

