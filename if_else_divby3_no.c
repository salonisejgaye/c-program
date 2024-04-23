//wap to check given no is divisible by 3,4,8 or not
#include<stdio.h>
void main()
{
    int num;  
    printf("enter any no");
    scanf("%d",&num);
    if(num%3==0 && num%4==0 && num%8==0)
    {
        printf("%d is divisible by 3,4 and 8",num);
    }
    else
    {
        printf("%d is not divisible by 3,4 and 8 both",num);
    }
}