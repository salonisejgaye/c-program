//wap to check martial status , gender , eligible for marriage or not
#include<stdio.h>
void main()
{
    char status,gender,age;
    printf("Enter marriage status : ");
    scanf("%c",&status);
    if(status=='s')
    {
        printf("Enter gender : ");
        scanf("%c",&gender);
        if(gender=='M')
        {
            printf("Enter age : ");
            scanf("%c",&age);
            if(age>=21)
            {
                printf("He is eligible for marriage");
            }
            else
            {
                printf("He is not eligible for marriage");
            }
        }
        else if(gender=='F')
        {
            printf("Enter age : ");
            scanf("%c",&age);
            if(age>=18)
            {
                printf("She is eligible for marriage");
            }
            else
            {
                printf("She is not eligible for marriage");
            }
        }
    }
    else if(status=='m')
    {
        printf("You are already married");
    }
    else
    {
        printf("Please enter status single or married");
    }
}