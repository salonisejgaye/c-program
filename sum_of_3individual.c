//wap to print sum of three individual digit
#include<stdio.h>
void main()
{
    int num,r,s,t,sum;
    printf("enter any num : ");
    scanf("%d",&num);
    r=num/100;
    s=(num/10)%10;
    t=num%10;
    sum=r+s+t;
    printf("sum of three number = %d",sum);
}