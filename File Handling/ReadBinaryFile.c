//Program to read the binary file "acc.dat"

#include<stdio.h>
#include"acct.h"
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fa;
    ACCT ac;
    fa=fopen("acc.dat","rb");

    if(fa==NULL)
    {
        printf("\nFile is Missing!");
        return 0;
    }

    while(1)
    {
        fread(&ac,sizeof(ACCT),1,fa);

        if(feof(fa))
        {
            break;
        }

        display(&ac);
    }

    fclose(fa);

    return 0;
}