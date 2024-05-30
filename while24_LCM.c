//wap to print LCM of two no
// it gives lowest multiple of given no
#include<stdio.h>
void main()
{
    int a,b,m,temp;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    m=a>b?a:b;
    temp=m;
    while(1)
    {
        if(m%a==0 && m%b==0)
        {
            printf("LCM = %d",m);
            break;
        }
        m=m++;
    }      
}