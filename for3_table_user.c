//wap to print multiplier table of given no.
#include<stdio.h>
void main()
{
    int i,num;
    printf("enter any no : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}