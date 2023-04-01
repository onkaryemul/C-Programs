//How to store address of value holding variables?

#include<stdio.h>

/*

int main()
{
    int x=10;
    int *y;
    y=&x;

    printf("\n%d",x); //10
    printf("\n%u",&x);
    printf("\n%d",*(&x)); //10

    printf("\n%u",y);
    printf("\n%u",&y);
    printf("\n%u",*(&y));

    printf("\n%d",*(*(&y))); //10
    printf("\n%d",*y); //10

    *y=*y+5; // x=x+5

    printf("\n%d",*y); //15

    return 0;
}

*/



int main()
{
    char p='A';
    char *q;
    q=&p;

    printf("\n%c",p); //A
    printf("\n%d",p); //65
    printf("\n%u",&p); 

    printf("\n%c",*(&p)+32); //a

    printf("\n%u",&q);
    printf("\n%u",*(&q)); 
    printf("\n%c",*q); //A

    *q=*q+32;

    printf("\n%c",p); //a

    return 0;
}

