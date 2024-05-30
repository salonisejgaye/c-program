//wap to print sum of given no and print their average
#include<stdio.h>
void main()
{
    int sum=0,i;
    float avg;
    for(i=1;i<=25;i++)
    {
        sum=sum+i;
    }
    printf("sum of 25 element = %d\n",sum);
    avg=sum/25.0;
    printf("average of 25 element = %f",avg);
}