//wap to convert temperature C to fahrenheit 
#include<stdio.h>
void main()
{
    float celcius,fah;
    printf("enter celcius : ");
    scanf("%f",&celcius);
    fah=(celcius*9/5)+32;
    printf("%.2f celcius = %.2f fahrenheit",celcius,fah);
}