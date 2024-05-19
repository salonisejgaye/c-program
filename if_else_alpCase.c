//wap to check alphabet case
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any char : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c character is in upper case",ch);
    }
    else
    {
        printf("%c character is in lower case",ch);

    }
}