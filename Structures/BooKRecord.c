#include <stdio.h>
#include<stdlib.h>
#include "book.h"

int main()
{

    /* 
       // Program to update and display book record
       BOOK a;
       input(&a);
       display(a);
   */

    /* 
       //Array of data type BOOK
       BOOK a[5];
       int i=0;

       for(i=0;i<5;i++)
          input(&a[i]);

       for(i=0;i<5;i++)
          display(a[i]);

    */ 

    /*  
        //Dynamic Memory Allocation for data type BOOK
        BOOK *a;

        int i=0,n;

        printf("\nBook Count: ");
        scanf("%d",&n);

        a=(BOOK *)malloc(n*sizeof(BOOK));

        for(i=0;i<n;i++)
           input(a+i);

        for(i=0;i<n;i++)
           display(*(a+i));

        free(a);
    */
    return 0;
}