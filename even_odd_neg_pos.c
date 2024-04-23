//wap to check given no is even-pos, even-neg, odd-pos, odd-neg
#include<stdio.h>
void main()
{
    int num;
    printf("enter any value :");
    scanf("%d",&num);
    if(num%2==0)
    {
        //even
        if(num<0)
        {
            printf("even negative ");
        }
        else
        {
            printf("even positive ");
        }
    }
    else
    {
        //odd
        if(num<0)
        {
            printf("odd negative ");
        }
        else
        {
            printf("odd positive ");
        }
    }
}