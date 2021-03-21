#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI  3.1415926535897932384626433832795028
int main()
{
    //system("cls");
    double y;
    
    
    FILE *fptr;
    fptr=fopen("trigo.txt","w");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (double i = -60.0000; i<=60.0000; i=i+0.1000)
    {
        y=i*i+ 600;
        fprintf(fptr, "%lf %lf \n",i,y);
    }
    fclose(fptr);

    
    return 0;
    
}