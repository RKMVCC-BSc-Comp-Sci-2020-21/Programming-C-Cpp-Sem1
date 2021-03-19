//13.Write a C/C++ program to calculate profit or loss.
#include<stdio.h>

int main()
{
	int cp,sp,profit,loss;
	float avg;
	printf("\n\tEnter the cost price : ");
	scanf("%d",&cp);
	printf("\n\tEnter the sell price : ");
	scanf("%d",&sp);
	if(sp > cp)
    {
        
        profit = sp - cp;
        printf("\n\tProfit = %d", profit);
        avg=(float)profit/cp * 100;
        printf("\n\tThe avarage of profit : %f",avg);

    }
    else if(cp > sp)
    {
        
        loss = cp - sp;
        printf("\n\tLoss = %d", loss);
        avg=(float)loss/cp*100;
        printf("\n\tThe avarage of loss : %f",avg);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}
