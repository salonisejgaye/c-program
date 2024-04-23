//wap to print division of two no using fun
#include<stdio.h>
void div();
void main()
{
    div();
}
void div()
{
    int a,b,div;
    printf("enter two no :");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("div = %d",div);
}