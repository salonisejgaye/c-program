//wap to print absolute difference btw given num and 51
#include<stdio.h>
void main()
{
    int num,d,d1;
    printf("Enter num : ");
    scanf("%d",&num);
    if(num>51)
    {
        d=num-51;
        d1=d*3;
        printf("Difference between input and 51 is = %d",d1);
    }
    else
    {
        printf("num is smaller than 51\nPlease enter num greater than 51");
    }
}