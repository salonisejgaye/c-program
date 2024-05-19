//wap to print two msg 1st about seconds and 2nd about days
#include<stdio.h>
void main()
{
    int num,hour,min,sec,year,month,week,days;
    printf("Enter num 1 or num 2 : ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("Enter seconds : ");
        scanf("%d",&sec);
        hour=sec/3600;
        sec=sec%3600;
        min=sec/60;
        sec=sec%60;
        printf("hour = %d\n",hour);
        printf("min = %d\n",min);
        printf("sec = %d",sec);
    }
    else if(num==2)
    {
        printf("Enter days : ");
        scanf("%d",&days);
        year=days/365;
        days=days%365;
        month=days/30;
        days=days%30;
        week=days/7;
        days=days%7;
        printf("year = %d\n",year);
        printf("month = %d\n",month);
        printf("week = %d\n",week);
        printf("days = %d",days);
    }
    else
    {
        printf("Please enter 1 or 2 num");
    }
}