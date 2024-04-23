//wap to print num btw given range
#include<stdio.h>
void main()
{
    int s,e;
    printf("enter starting range : ");
    scanf("%d",&s);
    printf("enter ending range : ");
    scanf("%d",&e);
    int i;
    for(i=s;i<=e;i++)
    {
        printf("%d\n ",i);
    }
}