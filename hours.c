//wap to convert a integer into hours, min, second
#include<stdio.h>
void main ()
{
    int sec,min,hour;
    printf("enter seconds");
    scanf("%d",&sec);
    hour=sec/3600;
    min=(sec-(3600*hour))/60;
    sec=(sec-(3600*hour)-(min*60));
    printf("hour = %d\n",hour);
    printf("min = %d\n",min);
    printf("sec = %d\n",sec);
}