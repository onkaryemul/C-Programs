// How to store address of a pointer variable?

// Pointer variable always takes 2 bytes

#include<stdio.h>

int main()
{
    int a=10;
    int *b;
    int **c;

    b=&a;
    c=&b;

    printf("\n%d",a); //10
    printf("\n%u",&a);
    printf("\n%d",*(&a)); //10

    printf("\n%u",b);
    printf("\n%d",*b); //10
    printf("\n%u",&b);

    printf("\n%c",55+(*b)); //A

    printf("\n%u",c);
    printf("\n%u",&c);

    printf("\n%d",*(*(*(&c)))); //10
    printf("\n%d",**c); 

    *b=(*b)*2; //20

    printf("\n%d",**c); //20

    return 0;
}
