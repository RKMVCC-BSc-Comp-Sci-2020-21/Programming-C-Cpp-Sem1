
#include <stdio.h>

int main()
{
    float bp,sp,loss,profit;
    
    printf("Enter buying price: ");
    scanf("%f",&bp);
    
    printf("Enter selling price: ");
    scanf("%f",&sp);
    
    if(sp>=bp)
    {
        profit= ((sp-bp)/bp)*100;
        printf("Your profit is %f%%",profit);
    }
    else
    {
        loss = ((bp-sp)/bp)*100;
        printf("Your loss is %f%%",loss);
    }
    
    return 0;
}
