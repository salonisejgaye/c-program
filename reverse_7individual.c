//wap to print reverse of 4 individual digit
#include<stdio.h>
void main()
{
    int num,a,b,c,d,e,f,g,rev;
    printf("enter any num : ");
    scanf("%d",&num);
    a=num/1000000;
    b=(num/100000)%10;
    c=(num/10000)%10;
    d=(num/1000)%10;
    e=(num/100)%10;
    f=(num/10)%10;
    g=num%10;
    rev=g*1000000 + f*100000 + e*10000+ d*1000 + c*100 + b*10 + a ;
    printf("reverse number = %d",rev);
    
}

 