//wap to check given no is divisible by 5 and 7 or not
#include<stdio.h>
void main()
{
    int num;  
    printf("enter any no");
    scanf("%d",&num);
    if(num%5==0 && num%7==0)
    {
        printf("%d is divisible by 5 and 7 ",num);
    }
    else
    {
        printf("%d is not divisible by 5 and 7 both",num);
    }
}