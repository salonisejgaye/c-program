//wap to print two msg to convert bank notes
#include<stdio.h>
void main()
{
    int notes,a,b,c,d,a1,b1,c1,d1,e1,num;
    printf("press 1 or 2 : ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("Enter notes : ");
        scanf("%d",&notes);
        a=notes/500;
        notes=notes%500;
        b=notes/50;
        notes=notes%50;
        c=notes/10;
        notes=notes%10;
        d=notes/1;
        printf("500 = %d\n",a);
        printf("50 = %d\n",b);
        printf("10 = %d\n",c);
        printf("1 = %d\n",d);
    }
    else if(num==2)
    {
        printf("Enter notes : ");
        scanf("%d",&notes);
        a1=notes/200;
        notes=notes%200;
        b1=notes/100;
        notes=notes%100;
        c1=notes/20;
        notes=notes%20;
        d1=notes/5;
        notes=notes%5;
        e1=notes/2;
        printf("200 = %d\n",a1);
        printf("100 = %d\n",b1);
        printf("20 = %d\n",c1);
        printf("5 = %d\n",d1);
        printf("2 = %d\n",e1);
    }
    else
    {
        printf("Please press 1 or 2");
    }
}