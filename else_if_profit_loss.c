//wap to check profit and loss on transactions
#include<stdio.h>
void main()
{
    int cp,sp,profit,loss;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(cp>sp)
    {
        loss=cp-sp;
        printf("loss = %d",loss);
    }
    else if(sp>cp)
    {
        profit=sp-cp;
        printf("profit = %d",profit);
    }
    else{
        printf("no profit no loss");
    }
}
