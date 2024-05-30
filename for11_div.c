//wap to check num is divisivle by 3,4 and 8 between 21 to 121
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%4==0 && i%8==0)
        {
            printf("Num which is divisible by 3,4 & 8 = %d",i);
        }
    }
}