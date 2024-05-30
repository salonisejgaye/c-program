//wap to find HCF of two no.
// it gives highest factor of a and b
#include<stdio.h>
void main()
{
    int a,b,m,i;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    m=a<b?a:b;
    for(i=m;i>=0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("HCF = %d",m);
            break;
        }
    }

}