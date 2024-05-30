//wap to check given no is perfect or not
//the sum should be double of factor is perfect no.
#include<stdio.h>
void main()
{
     int i,n,sum=0;
     printf("Enter num : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
        if(sum==n*2)//(sum/2==n)or(sum==n+n)
        {
            printf("%d is perfect no.",n);
        }
        else
        {
            printf("%d is Imperfect no.",n);
        }
        
          
}