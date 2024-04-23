//wap to print substraction of two no using fun
#include<stdio.h>
void sub();
void main()
{
    sub();
}
void sub()
{
    int a,b,sub;
    printf("enter two no :");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("sub = %d",sub);
}