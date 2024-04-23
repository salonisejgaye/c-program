//wap to swap three variables using 4th variable
#include<stdio.h>
void main()
{
   int temp,a,b,c;
   printf("enter three values");
   scanf("%d%d%d",&a,&b,&c);
   temp=a;
   a=b;
   b=c;
   c=temp;
   printf("after swap value of a=%d,b=%d,c=%d",a,b,c);
}