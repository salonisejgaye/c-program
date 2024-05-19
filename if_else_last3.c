//wap to check last digit is divisible by 3 or not
#include<stdio.h>
void main()
{
    int num,u;
    printf("Enter num : ");
    scanf("%d",&num);
    u=num%10;
    if(u%3==0)
    {
        printf("%d = last digit is divisible by 3",u);
    }
    else
    {
        printf("%d = last digit is not divisible by 3",u);
    }
}