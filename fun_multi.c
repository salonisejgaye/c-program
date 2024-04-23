//wap to print multiplication of two no using fun
#include<stdio.h>
void multi();
void main()
{
    multi();
}
void multi()
{
    int a,b,multi;
    printf("enter two no :");
    scanf("%d%d",&a,&b);
    multi=a*b;
    printf("multi = %d",multi);
}