// wap to check given year is leap year or not
#include<stdio.h>
void main()
{
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d year is a leap year",year);
    }
    else
    {
        printf("%d year is not a leap year",year);
    }
}