//wap to print odd no. of series
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}


/*{
    int i;
    for(i=1;i<=20;i+=2)
    {
        printf("%d \n",i);
    }
}*/