//wap to print smallest no. btw four no. without using && operator
#include<stdio.h>
void main()
{
    int num1,num2,num3,num4;
    printf("enter four no :");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    if(num1>num2)
    {
        if(num1<num3)
        {
            if(num1<num4)
            {
                printf("smallest no = %d",num1);
            }
            else
            {
                printf("smallest no = %d",num4);
            }
        }
        else
        {
            if(num3<num4)
            {
                printf("smallest no = %d",num3);
            }
            else 
            {
                printf("smallest no = %d",num4);
            }
        }
    }
    else
    {
        if(num2<num3)
        {
            if(num2<num4)
            {
                printf("smallest no =%d",num2);
            }
            else
            {
                printf("smallest no = %d",num4);
            }
        }
        else
        {
            if(num3<num4)
            {
                printf("smallest no = %d",num3);
            }
            else
            {
                printf("smallest no = %d",num4);
            }
        }
        
    }
}