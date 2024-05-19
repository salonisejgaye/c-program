//wap to take 2 3 4 digit num and print their reverse and sum of individual digit
#include<stdio.h>
void main()
{
    int a,b,c,d,num,rev,sum;
    printf("Enter num : ");
    scanf("%d",&num);
    if(num>9 && num<100)
    {
        a=num/10;
        b=num%10;
        rev=b*10+a;
        printf("Reverse of 2 digit no is = %d\n",rev);
        sum=a+b;
        printf("sum of 2 digit no is = %d",sum);
    }
    else if(num>99 && num<1000)
    {
        a=num/100;
        b=(num/10)%10;
        c=num%10;
        rev=c*100+b*10+a;
        printf("Reverse of 3 digit no is = %d\n",rev);
        sum=a+b+c;
        printf("sum of 3 digit no is = %d",sum);
    }
    else if(num>999 && num<10000)
    {
        a=num/1000;
        b=(num/100)%10;
        c=(num/10)%10;
        d=num%10;
        rev=d*1000+c*100+b*10+a;
        printf("Reverse of 4 digit no is = %d\n",rev);
        sum=a+b+c+d;
        printf("sum of 4 digit no is = %d",sum);
    }
    else
    {
        printf("Please enter 2 digit , 3 digit or 4 digit no");
    }
}