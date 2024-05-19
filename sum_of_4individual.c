// sum of 4 individual digits
#include<stdio.h>
void main()
{
    int num,a,b,c,d,sum;
    printf("enter values :");
    scanf("%d",&num);
    a=num/1000;
    b=(num%100)/100;
    c=(num/10)%10;
    d=(num%10);
    sum=a+b+c+d;
    printf("sum = %d",sum);
}