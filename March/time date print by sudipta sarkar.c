#include<stdio.h>
#include<time.h>

int main()
{
   

    time_t t;   // not a primitive datatype
    time(&t);

    printf("\nThis program has been writeen at (date and time): %s", ctime(&t));

   
    return 0;
}
