//wap to swap two variables without using 3rd variable
#include<stdio.h>
void main()
{
   int a,b;
   printf("enter values osf a and b : ");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swap value of a=%d,b=%d",a,b);
}