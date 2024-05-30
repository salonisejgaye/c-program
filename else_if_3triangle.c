//check triangle wheather is equilateral,isoceles,scalene
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter angles of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
        {
            printf("Equilateral Triangle");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Isoceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    else
    {
        printf("Please not enter angles more than 180");
    }

    
}
