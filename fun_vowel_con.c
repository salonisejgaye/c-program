//wap to check given no is vowel or consonent with function
#include<stdio.h>
void vowel();
void main()
{
    vowel();
}
void vowel()
{
    char ch;
    printf("enter a char : ");
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