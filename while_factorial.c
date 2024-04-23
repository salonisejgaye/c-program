// wap to print factorial of given n0.
#include<stdio.h>
void main()
{
  int i=1,num,f=1;
  printf("enter a num ");
  scanf("%d",num);
  while(num!=0)
  {
    f=f*num;
    i++;
  }
  printf("factorial = %d",f);
}  
  
