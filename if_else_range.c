//wap to check given no. is in range or not
#include<stdio.h>
void main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    if(num>=100 && num<200)
    {
        printf("%d = num is in range",num);
    }
    else
    {
        printf("%d = num is not in range",num);
    }
    
}