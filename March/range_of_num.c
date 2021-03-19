//RANGE OF NUMBER
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>

int main()
{
    int count;
    float value,high,low,sum,average,range;
    sum=0;
    count=0;
    printf("enter values in a line:  input a NEGATIVE NUMBER to END\n");
    input:
    scanf("%f",&value);
    if(value<0) goto output;
        count=count+1;
    if (count==1)
        high=low=value;
    else if(value>high)
        high=value;
    else if(value<low)
        low=value;
    sum=sum+value;
    goto input;
    output:
    average= sum/count;
    range=high-low;
    printf("\n\n");
    printf("total values: %d\n",count);
    printf("highest value: %f\n lowest value: %f\n",high,low);
    printf("range: %f\n average: %f\n",range,average);
    return 0;                
}
