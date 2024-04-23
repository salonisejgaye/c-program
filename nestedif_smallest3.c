//wap to print smallest no btw three no 
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter three no :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2)
    {
        if(num1<num3)
        {
            printf("smallest no = %d",num1);
        }
        else
        {
             printf("smallest no = %d",num3);
        }
    }
    else
    {
        if(num2<num3)
        {
            printf("smallest no = %d",num2);
        }
        else
        {
            printf("smallest no =%d",num3);
        }
    }


    

        
    
}