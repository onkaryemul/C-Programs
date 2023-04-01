//Program to create a file containing numbers

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f1;
    int no;
    f1=fopen("number.txt","w");

    printf("\nEnter No's: ");
    while(1)
    {
        scanf("%d",&no);
        if(no==0)
           break;

        putw(no,f1);
    }

    fclose(f1);
    return 0;
}