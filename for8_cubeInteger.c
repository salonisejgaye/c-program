//wap to display the cube of the num up to an integer
#include<stdio.h>
void main()
{
    int i,n,cube;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
    }
    printf("%d\n",cube);
}