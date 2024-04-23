//wap to swap three variables without using 4th variable
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter three values");
   scanf("%d%d%d",&a,&b,&c);
   a=a+b+c;
   b=a-b-c;
   c=a-b-c;
   a=a-b-c;
   printf("after swap value of a=%d,b=%d,c=%d",a,b,c);
}