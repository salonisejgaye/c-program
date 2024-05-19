//wap to calculate total salary based on basic salary
#include<stdio.h>
void main()
{
    float basic,Total;
    printf("Enter salary : ");
    scanf("%f",&basic);
    if(basic>=4000 && basic<6000)
    {
        Total=basic + basic*20/100 + basic*40/100;
        printf("Total salary = %f",Total);
    }
    else if(basic>=6000 && basic<10000)
    {
        Total=basic + basic*45/100 + basic*20/100;
        printf("Total salary = %f",Total);

    }
    else if(basic>10000)
    {
        Total=basic + basic*55/100 + 5000;
        printf("Total salary = %f",Total);

    }
    else
    {
        printf("please enter salary above 4000");
    }
}