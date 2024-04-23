//wap to swap four variables without using 5th variable
#include<stdio.h>
void main()
{
   int a,b,c,d;
   printf("enter four values");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   a=a+b+c+d;
   b=a-b-c-d;
   c=a-b-c-d;
   d=a-b-c-d;
   a=a-b-c-d;
   printf("after swap value of a=%d,b=%d,c=%d,d=%d",a,b,c,d);
}