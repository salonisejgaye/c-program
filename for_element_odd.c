//wap tp print given odd elemenet of odd series
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }   
}