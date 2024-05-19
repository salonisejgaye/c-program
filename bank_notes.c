//wap to seperate bank notes
#include<stdio.h>
void main()
{
    int notes,fh,th,oh,fi,tw,ten,five,two,one;
    printf("enter notes : ");
    scanf("%d",&notes);
    fh=notes/500;
    notes=notes%500;
    th=notes/200;
    notes=notes%200;
    oh=notes/100;
    notes=notes%100;
    fi=notes/50;
    notes=notes%50;
    tw=notes/20;
    notes=notes%20;
    ten=notes/10;
    notes=notes%10;
    five=notes/5;
    notes=notes%5;
    two=notes/2;
    notes=notes%2;
    one=notes/1;
    printf("500 = %d \n",fh);
    printf("200 = %d \n",th);
    printf("100 = %d \n",oh);
    printf("50 = %d \n",fi);
    printf("20 = %d \n",tw);
    printf("10 = %d \n",ten);
    printf("5 = %d \n",five);
    printf("2 = %d \n",two);
    printf("1 = %d \n",one);

}