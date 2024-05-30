#include<stdio.h>
void main()
{
    int i,sum=0;
   // printf("Enter num : ");
   // scanf("%d",&n);
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            sum=sum+i;
        }
    }
    printf("sum of all integer which is divisible by 9 = %d",sum);

}