//wap to print table of given no. using while loop
#include<stdio.h>
void main()
{
    int i,tab,num;
    printf("enter any no : ");
    scanf("%d\n",&num);
    while(i<=10)
    {
        tab=i*num;
        printf("%d * %d = %d\n",num,i,tab);
        i++;
    }
}