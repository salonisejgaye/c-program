//check storng no. or not
//individual digit ke factorial ka sum given no. ke equal hona chahiye
#include<stdio.h>
void main()
{
     int rem,sum=0,num,temp,f,i;
     printf("Enter num : ");
     scanf("%d",&num);
     temp=num;
     while(num>0)
     {
        rem=num%10;
        f=1;
        for(i=1;i<=rem;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        num=num/10;
     }      
     if(sum==temp)
     {
        printf(" strong no.");
     }
     else
     {
        printf(" not strong no.");
     }
}