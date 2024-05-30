//wap to print sum of even digit
#include<stdio.h>
void main()
{
    int num,rem,sum;
    printf("Enter num : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(rem%2==0)
        {
            sum=sum+rem;
        }
        num=num/10;
    } 
    printf("%d",sum) ;    
}
