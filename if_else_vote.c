//wap to print peoples are eligible for vote or not
#include<stdio.h>
void main()
{
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("people is eligible for voteing");
    }
    else
    {
        printf("people is not eligible for voting");
    }
}
    