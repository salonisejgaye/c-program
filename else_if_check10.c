//wap to check given no. is <10, >10, =10
#include<stdio.h>
void main()
{
    int num;
    printf("enter any value");
    scanf("%d",&num);
    if(num>10)
    {
        printf("%d is greater than 10",num);
    }
    else if(num<10)
    {
        printf("%d is smaller than 10",num);
    }
    else
    {
        printf("%d is equal to 10",num);
    }
}
    