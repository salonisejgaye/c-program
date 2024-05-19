//wap to print difference btw two area of circle
#include<stdio.h>
void main()
{
    float r1,r2,a1,a2,diff;
    printf("Enter radius of first circle : ");
    scanf("%f",&r1);
    printf("Enter radius of second circle : ");
    scanf("%f",&r2);
    a1 = 3.14*r1*r1;
    a2 = 3.14*r2*r2;
    if(a1>a2)
    {
    diff=a1-a2;
    printf(" Difference between Circle1 and circle2 = %f ",diff);
    }
    else
    {
    diff=a2-a1;
    printf(" Difference between Circle1 and circle2 = %f ",diff);
    }
}