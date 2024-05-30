//wap to calculate percentage of students
#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,per;
    printf("enter 5 subjects marks : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>40 && s2>40 && s3>40 && s4>40 && s5>40)
    {
        printf("PASS :\n");
        per=(s1+s2+s3+s4+s5)/500*100;
        if(per>=75)
        {
            printf("A Grade");
        }
        else if(per>=60 && per<75)
        {
            printf("B Grade");
        }
        else if(per>=50 && per<60)
        {
            printf("C Grade");
        }
        else
        {
            printf("D Grade");
        }
    }
    else
    {
        printf("Student FAIL in exam ");
    }
}
