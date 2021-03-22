#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sub1,sub2,sub3,Average;

    printf("Enter the value of sub1 : ",sub1);
    scanf("%d",&sub1);

    printf("Enter the value of sub2 :",sub2);
    scanf("%d",&sub2);

    printf("Enter the value of sub3 :",sub3);
    scanf("%d",&sub3);

    Average = ((sub1+sub2+sub3)/3);

    if ((sub1>32)&&(sub2>32)&&(sub3>32))
    {
        if (Average>40)
        {
            printf("The student pass\n");
        }
        else
        {
            printf("The student fail\n");
        }    
    }
    else
    {
        printf("The student fail\n");
    }
    return 0;
}
