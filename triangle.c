// area of triangle
#include<stdio.h>
void main()
{
    float base,height,area;
    printf("enter value of base :");
    scanf("%f",&base);
    printf("enter value of height :");
    scanf("%f",&height);
   // printf("value of base is %f\n",base);
  //  printf("value of height is %f/n",height);
    area=0.5*(base*height);
   printf("area of triangle is %f",area);
}