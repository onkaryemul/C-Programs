//Program to read the formatted text file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fs;
    int no,mrk;
    char nm[15];
    fs=fopen("Stu.txt","r");

    if(fs==NULL)
    {
        printf("\nFile Not Found");
        return 0;
    }

    printf("\nStudent Data:\n");
    while(1)
    {
        fscanf(fs,"%d %s %d",&no,nm,&mrk);

        if(feof(fs))
        {
            break;
        }

        printf("\n%5d %-15s %3d",no,nm,mrk);
    }

    fclose(fs);

    return 0;
}