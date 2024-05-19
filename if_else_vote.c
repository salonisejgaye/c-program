//wap to print peoples are eligible for vote or not
#include<stdio.h>
void main()
{
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("candidate is eligible for voting");
    }
    else
    {
        printf("candidate is not eligible for voting");
    }
}
    