//wap to check given no. is arm strong or not    "TYPE 1"
#include<stdio.h>
void main()
{
    int num,rem,sum=0,temp;
    printf("Enter any num : ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==temp)
    {
        printf("Arm strong no.");
    }
    else
    {
        printf("Not Arm strong no.");
    }
}