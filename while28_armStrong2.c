//wap to check given no. is arm strong or not    "TYPE 2"
#include<stdio.h>
void main()
{
    int num,rem,sum=0,temp,c,i,ans;
    printf("Enter any num : ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        c++;
        num=num/10;
    }
    while(num>0)
    {
        rem=num%10;
        ans=1;
        for(i=1;i<=c;i++)
        {
            ans=ans*rem;
        }
        sum=sum+ans;
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