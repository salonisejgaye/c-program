//wap to display the multiplier table vertically from 1 to n
#include<stdio.h>
void main()
{
    int i,n,tab;
    printf("Enter any num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        tab=i*n;
        printf("%d * %d = %d\n",n,i,tab);
    }
}