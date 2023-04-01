//Program to Create a Formatted text file containing Student Record

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fs;
    int no,mrk;
    char nm[15];
    fs=fopen("Stu.txt","w");

    while(1)
    {
        printf("\nRoll No.: ");
        scanf("%d",&no);

        if(no==0)
        {
            break;
        }

        printf("\nName: ");
        scanf("%s",nm);

        printf("\nMarks: ");
        scanf("%d",&mrk);

        fprintf(fs,"%d %s %d\n",no,nm,mrk);

    }

    fclose(fs);

    return 0;
}