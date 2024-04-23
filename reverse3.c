//wap to print 3 digit in reverse order
#include<stdio.h>
void main()
{
    int a,b,c,num,rev;
    printf("enter any value ");
    scanf("%d",&num);
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    rev=c*100+b*10+a;
    printf("reverse of given value is %d",rev);
}