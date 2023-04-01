/*
   Smallest unit  from memory - bit
   Smallest storageble unit from memory - byte
   Default Memory Block - 64kB
                        = 65536 bytes
                        - 0-65535
    
    Operators:
    & - address of  operator
      - begin byte no
    
    * - indirection operator
      - value at address operator
*/


//Program to demonstrate use of operators

#include<stdio.h>

int main()
{
    int x=10;

    printf("\n%d",x); //10
    printf("\n%u",&x); 
    printf("\n%d",*(&x)); //10

    return 0;
}