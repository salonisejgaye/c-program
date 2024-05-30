//wap to print sum of given no and check it is even or odd
#include<stdio.h>
void main()
{
    int sum=0,i,n;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d\n",sum);
    if(sum%2==0)
    {
        printf("sum is even");
    }
    else
    {
        printf("sum is odd");
    }
}