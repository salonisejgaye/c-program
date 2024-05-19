//wap to convert seconds into hours , minute , and remaining seconds
#include<stdio.h>
void main()
{
    int hours,min,sec;
    printf("enter seconds : ");
    scanf("%d",&sec);
    hours=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("hours = %d \n",hours);
    printf("min = %d \n",min);
    printf("sec = %d \n",sec);

}