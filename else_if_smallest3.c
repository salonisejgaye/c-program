//wap to find smallest no. btw 3 no.
#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("enter three no :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2 && n1<n3)
    {
        printf("smallest no = %d",n1);
    }
    else if(n2<n1 && n2<n3)
    {
        printf("smallest no = %d",n2);
    }
    else
    {
        printf("smallest no = %d",n3);
    }
}