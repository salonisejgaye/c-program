//wap to check how many no is even or odd
#include<stdio.h>
void main()
{
    int i,evencount=0,oddcount=0;
    for(i=1;i<=11;i++)
    {

        if(i%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("count of all even num = %d\n",evencount);
    printf("count of all odd num = %d\n",oddcount);
}