//fibonacci series
#include<stdio.h>
void main()
{
       int a,b,c,i,n;
       a=-1;
       b=1;
       printf("Enter any num : ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
          c=a+b;
          printf("%d\n",c);
          a=b;
          b=c;
       }    
}