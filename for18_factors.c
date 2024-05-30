//wap to print factors of given no
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter num : ");
    scanf("%d",&n);
    printf("Factors of %d\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    
}
