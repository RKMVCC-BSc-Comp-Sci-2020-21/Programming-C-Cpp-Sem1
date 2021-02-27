#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>

#define N 9200

int main(int argc, char *argv[])
{
    srand(time(NULL));

    long a[1000],m;
    int i,x,y;

    printf("/n /t/t THE BANK OF BORODA\n\n");

    for(i=0;i<1000;i++)
    {
        a[i] = (RAND_MAX + i);

        printf("\n\t %d >> The account No is  = %d%ld\n\n",(i+1),N,a[i]);

    }

    printf("\t \t ENTER THE BRANC CODE[first four digits] = ");
    scanf("%d",&x);

    printf("\t\t ENTER THE LAST DIGITS OF ACCOUNT NO [after %d] = ",x);
    scanf("%d",&y);

    for(i=0;i<1000;i++)
    {
        if(x==N && y==a[i])
        {
            printf("\n\n\n\t\t\t !! MATCH !!\t\t !! MATCH !! \t\t !! MATCH !!\n\n");

            printf("\t\t THE ACCOUNT NO MATCH WITH ACCOUNT HOLDER ~ %d\n\n",(i+1));

            

        }



    }




    return 0;
}
