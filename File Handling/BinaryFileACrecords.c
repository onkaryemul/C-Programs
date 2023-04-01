//Program to Create a binary file containing acct type records

#include<stdio.h>
#include"acct.h"
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fa;
    ACCT ac;
    int no;
    fa=fopen("acc.dat","wb");

    while(1)
    {
        printf("\nA/c No.: ");
        scanf("%d",&no);

        if(no==0)
        {
            break;
        }

        input(&ac,no);
        fwrite(&ac,sizeof(ACCT),1,fa);
    }

    fclose(fa);

    return 0;
}