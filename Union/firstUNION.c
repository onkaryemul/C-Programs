#include<stdio.h>

union pqr
{
    int a;
    float b;;
    char c;
}k;

int main()
{
    k.a=10;
    printf("\n%d",k.a);

    k.b=9.2;
    printf("\n%f",k.b);

    k.c='A';
    printf("\n%c",k.c);

    return 0;
}