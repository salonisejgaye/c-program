//wap to check given no is multple of 7 or not
#include<stdio.h>
void main()
{
    int num;  
    printf("enter any no");
    scanf("%d",&num);
    if(num*7)
    {
        printf("%d is multiple of 7",num);
    }
    else
    {
        printf("%d is not multiple of 7 ",num);
    }
}