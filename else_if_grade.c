//wap to print grade of student acc. to percent
#include<stdio.h>
void main()
{
    int per;
    printf("enter percentage :");
    scanf("%d",&per);
    if(per>=75)
    {
        printf("A");
    }
    else if(per>=60 && per<75)
    {
        printf("B");
    }
    else if(per>=50 && per<60)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
}