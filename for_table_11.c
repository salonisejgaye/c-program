//wap to print table of 11
#include<stdio.h>
void main()
{
    int i,num;
    printf("enter any no : ");
    scanf("%d\n",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}