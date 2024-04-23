//wap to print even or odd no using fun
#include<stdio.h>
void evenOdd();
void main()
{
    evenOdd();
}
void evenOdd()
{
    int num;
    printf("enter any num :");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}