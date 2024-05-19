//wap to print reverse of 4 individual digit
#include<stdio.h>
void main()
{
    int num,a,b,c,d,rev;
    printf("enter any num : ");
    scanf("%d",&num);
    a=num/1000;
    b=(num/100)%10;
    c=(num/10)%10;
    d=num%10;
    rev=d*1000 + c*100 + b*10 + a ;
    printf("reverse number = %d",rev);
    
}

 //printf("%d%d%d%d",d,c,b,a);