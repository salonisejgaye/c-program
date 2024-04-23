//wap to swap four variables using 5th var
#include<stdio.h>
void main()
{
   int temp,a,b,c,d;
   printf("enter four values");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   temp=a;
   a=b;
   b=c;
   c=d;
   d=temp;
   printf("after swap value of a=%d,b=%d,c=%d,d=%d",a,b,c,d);
}