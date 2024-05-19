//wap to calculate total electicity bill
#include<stdio.h>
void main()
{
    float unit,bill,total;
    printf("Enter unit : ");
    scanf("%f",&unit);
    if(unit<=50)
    {
        bill=unit*0.50;
        printf("total bill = %f",bill);
    }
   else if(unit<=150)
    {
        bill=50*0.50 + (unit-50)*0.75;
        printf("total bill = %f",bill);
    }
    else if(unit<=250)
    {
        bill=50*0.50 + 100*0.75 + (unit-150)*1.20;
        printf("total bill = %f",bill);
    }
    else
    {
        bill=50*0.50 + 100*0.75 + 100*1.20 + (unit-250)*1.50;
        printf("total bill = %f",bill);
    }
}



//bill = bill + bill * 20/100;
//printf("%f",bill)