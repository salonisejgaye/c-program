//wap to find smallest no. btw 4 no. with the help of && operator
#include<stdio.h>
void main()
{
    int n1,n2,n3,n4;
    printf("enter four no :");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1<n2 && n1<n3 && n1<n4)
    {
        printf("smallest no = %d",n1);
    }
    else if(n2<n1 && n2<n3 && n2<n4)
    {
        printf("smallest no = %d",n2);
    }
    else if (n3<n1 && n3<n2 && n3<n4)
    {
        printf("smallest no = %d",n3);
    }
    else
    {
        printf("smallest no =%d",n4);
    }
}