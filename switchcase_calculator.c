//wap to print calculator of given no.
#include<stdio.h>
void main()
{
      int num,a,b,ans;
      printf("welcome my calculator :\n");
      printf("press 1 for add :\n");
      printf("press 2 for sub :\n");
      printf("press 3 for multi :\n");
      printf("press 4 for div :\n");
      printf("press number : ");
      scanf("%d",&num);
      switch(num)
      {
          case 1:
          printf("you choosed add :\n");
          printf("enter two numbers :");
          scanf("%d%d",&a,&b);
          ans=a+b;
          printf("%d + %d = %d\n",a,b,ans);
          break;
          case 2:
          printf("you choosed sub :\n");
          printf("enter two number :");
          scanf("%d%d",&a,&b);
          ans=a-b;
          printf("%d - %d = %d\n",a,b,ans);
          break;
          case 3:
          printf("you choosed multi :\n");
          printf("enter two number :");
          scanf("%d%d",&a,&b);
          ans=a*b;
          printf("%d * %d = %d\n",a,b,ans);
          break;
          case 4:
          printf("you choosed div :\n");
          printf("enter two number :");
          scanf("%d%d",&a,&b);
          ans=a/b;
          printf("%d / %d = %d\n",a,b,ans);
          break;
          default :printf("please press number 1 to 4");
       }       
}-- 