//wap to print month name according to number
#include<stdio.h>
void main()
{
    int num;
    printf("enter any no :");
    scanf("%d",&num);
    if(num==1)
    {
       printf("january");
    }
    else if(num==2)
    {
        printf("february");
    }
    else if(num==3)
    {
        printf("march");
    }
    else if(num==4)
    {
        printf("april");
    }
    else if(num==5)
    {
        printf("may");
    }
    else if(num==6)
    {
        printf("june");
    }
    else if(num==7)
    {
        printf("july");
    }
    else if(num==8)
    {
        printf("august");
    }
    else if(num==9)
    {
        printf("september");
    }
    else if(num==10)
    {
        printf("october");
    }
    else if(num==11)
    {
        printf("november");
    }
    else if(num==12)
    {
        printf("december");
    }
    else
    {
        printf("enter the num 1 to 12");
    }
}