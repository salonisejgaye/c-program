//wap to check wheather character is alphabet , digit , special character
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch>='z' || ch>='A' && ch>='Z')
    {
        printf("%c is an character",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is digit",ch);
    }
    else
    {  
         printf("%c is special character",ch);
    }
}