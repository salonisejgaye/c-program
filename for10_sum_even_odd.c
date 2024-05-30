//wap to find sum of all even and odd num btw 77-165
#include<stdio.h>
void main()
{
   int sumeven=0,sumodd=0,i;
   int num;
   printf("Enter num : ");
   scanf("%d",&num);
   for(i=1;i<=num;i++)//from user
  // for(i=1;i<=26;i++)
  {

    if(i%2==0)
    {
        sumeven=sumeven+i;
    }
    else
    {
        sumodd=sumodd+i;
    }
  }
    printf("sum of even no is = %d\n",sumeven);
    printf("sum of odd no is = %d",sumodd);
  
}