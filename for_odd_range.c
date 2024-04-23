//wap to print odd num btw given range
#include<stdio.h>
void main()
{
    int s,e;
    printf("enter starting range : ");
    scanf("%d",&s);
    printf("enter ending range : ");
    scanf("%d",&e);
    int i;
    printf("even odd between %d to %d : ",s,e);
    for(i=s;i<=e;i++)
    {
        if(i%2!=0)
       {
           printf("%d\n ",i);
       }
    }
}