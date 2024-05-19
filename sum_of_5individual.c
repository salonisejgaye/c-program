//wap to print sum of 5 individual digitals
#include<stdio.h>
void main()
{
    int num,a,b,c,d,e,sum;
    printf("enter value of num");
    scanf("%d",&num);
    a=num/10000;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    sum=a+b+c+d+e;
    printf("sum of individual digit is %d",sum);
}