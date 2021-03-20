//CHECK PRIME OR NOT
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
#include<math.h>

int main()
{
    int isPrime,flag;
    long int lngN,lngM,i;
    do{
        do{
            flag=0;
            printf("enter 0 to discontinue.\n");
            printf("enter the number (2<lngN<20000000)\n");
            printf("check the number is prime or not:");
            scanf("%ld",&lngN);
            if(lngN == 0) break;
            if ((lngN < 2) || (lngN >20000000))
                flag=1;
        } while (flag);

        if(lngN == 0) break;

        if (lngN == 2){
            printf("the number %ld is a even prime number\n",lngN);
        continue;
        }

        isPrime=1;
        lngM = ceil(sqrt(lngN));
        for(i=2;i<=lngM;i++){
            if((lngN % i) == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            printf("the number is %ld a prime number\n",lngN);
        }
        else{
            printf("the number is %ld not a prime number\n",lngN);
        }

    } while (1);

    printf("thank you.\n");
    return 0;
}
