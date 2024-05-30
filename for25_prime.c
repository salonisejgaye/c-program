//wap to check given no. is prime no or not
#include<stdio.h>
void main()
{
     int num,i,f=1;
     printf("Enter num : ");
     scanf("%d",&num);
    if(num==0 || num==1)
    {
        printf("%d is not a prime no ",num);
    }
    else
    {
        //f=1;
        for(i=2;i<num;i++)
        {
           
            if(num%i==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("%d is prime no",num);
        }
        else
        {
            printf("%d is not prime no",num);
        }
    }
}