//wap to find HCF of two no.
// it gives highest factor of a and b
#include<stdio.h>
void main()
{
    int a,b,m;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    m=a<b?a:b;
    while(1)
    {
        if(a%m==0 && b%m==0)
        {
            printf("HCF = %d",m);
            break;
        }
        m--;
    }

}