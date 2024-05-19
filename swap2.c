//wap to swap two variables using third variable
#include<stdio.h>
void main()
{
   int temp,a,b,;
   printf("enter two values");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("after swap value of a=%d,b=%d",a,b);
}