//Program to read the file  containing numbers

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f1;
    int no;
    f1=fopen("number.txt","r");

    if(f1==NULL)
    {
        printf("\nFile Not found");
        return 0;
    }

    printf("\nNumbers:\n");
    while(1)
    {
        no=getw(f1);
        if(feof(f1))
        {
            break;
        }

        printf("\n%d",no);
    }

    fclose(f1);

    return 0;
}