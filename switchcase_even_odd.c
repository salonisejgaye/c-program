//wap to check given number is even or odd
#include<stdio.h>
void main()
{
    int num;
    printf("enter any num :");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1 : printf("even"); break;
        case 0 : printf("odd"); break;
    } 
}