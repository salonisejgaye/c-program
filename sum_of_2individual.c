// sum of 2 individual digits
#include<stdio.h>
void main()
{
    int num,a,b,sum;
    printf("enter values :");
    scanf("%d",&num);
    a=num/10;
    b=num%10;
    sum=a+b;
    printf("sum = %d",sum);
}