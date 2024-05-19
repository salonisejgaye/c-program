//wap to print reverse of three individual digit
#include<stdio.h>
void main()
{
    int num,r,s,t,rev;
    printf("enter any num : ");
    scanf("%d",&num);
    r=num/100;
    s=(num/10)%10;
    t=num%10;
    rev=t*100 + s*10 + r ;
    printf("reverse number = %d",rev);
}