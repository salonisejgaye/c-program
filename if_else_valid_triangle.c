//wap to check triangle is valid or not
#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("enter angles of triangle : ");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180 && a1>0 && a2>0 && a3>0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}