//wap to check given integer sum is equal to 30 or not
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter values of a : ");
    scanf("%d",&a);
    printf("Enter values of b : ");
    scanf("%d",&b);
    if(a==30 || b==30 || a+b==30)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}