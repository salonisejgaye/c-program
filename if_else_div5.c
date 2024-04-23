//wap to check value is divisible by 5 or not
#include<stdio.h>
void main()
{
    int num;  
    printf("enter any no");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("this no is divisible by 5 ");
    }
    else
    {
        printf("this no is not divisible by 5 ");
    }
}