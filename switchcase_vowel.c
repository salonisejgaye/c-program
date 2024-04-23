//wap to check given char is vowel or consonent
#include<stdio.h>
void main()
{
    char ch;
    printf("enter a char :");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':printf("vowel");
        break;
        case 'e':printf("vowel");break;
        case 'i':printf("vowel");break;
        case 'o':printf("vowel");break;
        case 'u':printf("vowel");break;
        default :printf("consonent");
    }
} 