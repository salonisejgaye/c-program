//wap to check given no is zero or positive or negative
#include<stdio.h>
void main()
{
    int num;
    printf("enter any num : ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("num is zero");
    }
    else if(num>0)
    {
        printf("num is positive");
    }
    else
    {
        printf("num is negative");
    }
}