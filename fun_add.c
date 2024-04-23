//wap to print addition of two no using fun
#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a,b,sum;
    printf("enter two no :");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum = %d",sum);
}