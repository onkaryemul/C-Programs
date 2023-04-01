//Program based on arrays and pointers in C

#include<stdio.h>

int main()
{
    int val[5]={10,20,30,40,50};

    int *p;

    p=val;//pointer p holds the base address of array val

    printf("\nDisplaying without using Pointer\n");
    for(int i=0;i<5;i++)
    {
        printf("val[%d]=%d and address is %u\n",i,val[i],&val[i]);
    }

    printf("\nDisplaying using Pointer\n");
    for(int i=0;i<5;i++)
    {
        printf("val[%d]=%d and address is %u\n",i,*(p+i),(p+i));
    } 

    return 0;
}