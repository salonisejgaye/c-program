//wap to print no. in words
#include<stdio.h>
void main()
{
   int num;
   printf("enter any no :");
   scanf("%d",&num);
   if(num==1)
   {
      printf("one");
   }
   else if(num==2)
   {
      printf("two");
   }
   else if(num==3)
   {
      printf("three");
   }
   else if(num==4)
   {
      printf("four");
   }
   else if(num==5)
   {
      printf("five");
   }
   else if (num==6)
   {
       printf("six");
   }
   else
   {
       printf("enter num 1 to 6");
   }
}