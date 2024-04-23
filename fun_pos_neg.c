//wap to print positive or negative no using fun
#include<stdio.h>
void positive();
void main()
{
    positive();
}
void positive()
{
    int num;
    printf("enter any num : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
}