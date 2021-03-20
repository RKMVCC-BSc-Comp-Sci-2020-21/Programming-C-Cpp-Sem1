#include<stdio.h>

enum bool {Sun=10, Mon=20, Tue=30, Wed, Thurs, Fri};


int main()
{
    enum bool var;
    var = Mon;
    printf("%d",var);

    return 0;

}

