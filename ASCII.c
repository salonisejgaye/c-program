//wap to take a char from user and print ascii code
#include<stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c",&ch);
    printf("value of ch : %c\n",ch);
    printf("ascii code of %c = %d",ch,ch);
}