//wap to print sum of 6 individual digitals
#include<stdio.h>
void main()
{
    int num,a,b,c,d,e,f,sum;
    printf("enter value of num");
    scanf("%d",&num);
    a=num/100000;
    b=(num/10000)%10;
    c=(num/1000)%10;
    d=(num/100)%10;
    e=(num/10)%10;
    f=num%10;
    sum=a+b+c+d+e+f;
    printf("sum of individual digit is %d",sum);
}