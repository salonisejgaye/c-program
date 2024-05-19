//wap to check greatest number btw two no
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greatest",a);
    }
    else
    {
        printf("%d is greatest",b);
    }
}