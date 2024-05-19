//wap to print triple sum of given num
#include<stdio.h>
void main()
{
    int a,b,s;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        s=(a+b)*3;
        printf("Triple sum of a and b = %d",s);
    }
    else
    {
        s=a+b;
        printf("sum of a and b = %d",s);
    }
}