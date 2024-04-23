//wap to check given char is vowel or consonent
#include<stdio.h>
void main()
{
    char ch;
    printf("enter any char");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e'  || ch=='i'  || ch=='o'  || ch=='u' )
    {
        printf("this char is vowel");
    }
    else
    {
        printf("this char is consonent");
    }
}