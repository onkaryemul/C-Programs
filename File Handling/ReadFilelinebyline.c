//Program to read the file line by  line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char p[80];
    FILE *fs;
    fs=fopen("line.txt","r");

    printf("\nString:\n");
    while(1)
    {
        fgets(p,79,fs);

        if(feof(fs))
        {
            break;
        }

        puts(p);
    }

    fclose(fs);
    return 0;
}