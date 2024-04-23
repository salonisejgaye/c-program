//wap to check weight,rupees,days,distance
#include<stdio.h>
void main()
{
    int num,years,months,weeks,days;
    float kg,gram,dollar,rupees,km,meter;
    printf("press 1 for weight :\n");
    printf("press 2 for indian currency :\n");
    printf("press 3 for days :\n");
    printf("press 4 for distance :\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1 :
        printf("you choosed weight : \n");
        printf("enter value of kg : ");
        scanf("%f",&kg);
        gram=kg*1000;
        printf("weight in gram = %.2f",gram);
        break;

        case 2 :
        printf("you choosed indian currency :\n");
        printf("enter value of rupees : ");
        scanf("%f",&rupees);
        dollar=rupees/83;
        printf("currency in dollar = %.2f",dollar);
        break;

        case 3 :
        printf("you choosed days : \n"); 
        printf("enter num of days : ");
        scanf("%d",&days);
        years=days/365;
        days=days%365;
        months=days/30;
        days=days%30;
        weeks=days/7;
        days=days%7;
        printf("years = %d \n",years);
        printf("months = %d \n",months);
        printf("weeks = %d \n",weeks);
        printf("days = %d \n",days);
        break;

        case 4 :
        printf("you choosed distance : \n");
        printf("enter value of meter : ");
        scanf("%f",&meter);
        km=meter/1000;
        printf("distance in meter = %.2f",km);
        break;
    }
}