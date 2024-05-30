//wap to count factors of given no
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter num : ");
    scanf("%d",&n);
    printf("Factors of %d\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("The number of factors = %d",count);
    
}
