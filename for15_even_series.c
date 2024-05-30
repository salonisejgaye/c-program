//wap to print even no. of series from user
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }   
}


/*  int i;
    for(i=1;i<=20;i+=2)
    {
       printf("%d ",i);
    }   
}*/