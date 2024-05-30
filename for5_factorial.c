//wap to print factorial of given no.
#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i; 
    }
    printf("Factorial = %d\n",f);

}