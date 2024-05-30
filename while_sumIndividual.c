//wap to print sum of individual digit 
#include<stdio.h>
void main()
{
    int sum=0,num,rem;
    printf("Enter num : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }      
    printf("%d",sum);
}