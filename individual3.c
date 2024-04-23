//wap to print sum of 3 individual digitals
#include<stdio.h>
void main()
{
    int num,a,b,c,sum;
    printf("enter value of num");
    scanf("%d",&num);
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    sum=a+b+c;
    printf("sum of individual digit is %d",sum);
}