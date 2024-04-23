//wap to print table of 2
#include<stdio.h>
void main()
{
    int i,tab,num;
    num=2;
    for(i=1;i<=10;i++)
    {
        tab=i*num;
        printf("%d * %d = %d\n",2,i,tab);
    }
}