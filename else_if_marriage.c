//wap to check martial status , gender , eligible for marriage or not
#include<stdio.h>
void main()
{
    char status,gender;
    int age;
    printf("Press 's' for single or press 'm' for married : ");
    scanf("%c",&status);
    if(status=='s')
    {
        printf("press 'F' for female  or press 'M' for male : ");
        //getchar();
        scanf(" %c",&gender);
<<<<<<< HEAD
        //gender=getchar();
=======
>>>>>>> 64cebb9a4e5066ad135a32026d06365e5001a22b
        if(gender=='M')
        {
            printf("Enter your age : ");
            scanf("%d",&age);
            if(age>=21)
            {
                printf("You are eligible for marriage");
            }
            else
            {
<<<<<<< HEAD
                printf("You are not eligible for marriage");
=======
                printf("Ypu are not eligible for marriage");
>>>>>>> 64cebb9a4e5066ad135a32026d06365e5001a22b
            }
        }
        else if(gender=='F')
        {
            printf("Enter age : ");
            scanf("%d",&age);
            if(age>=18)
            {
                printf("You are eligible for marriage");
            }
            else
            {
                printf("You are not eligible for marriage");
            }
        }
        else
        {
            printf("Please enter gender for male or female");
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
