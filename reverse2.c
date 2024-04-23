//wap to print reverse value of given value
#include<stdio.h>
void main()
{
   int a,b,num,rev;
   printf("enter any value");
   scanf("%d",&num);
   a=num/10;
   b=num%10;
   rev=b*10+a;
   printf("reverse of given no=%d",rev);
}