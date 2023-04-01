//Program to write strings to the file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[80];
    FILE *fs;
    fs=fopen("line.txt","w");

    printf("\nEnter Strings:\n");
    while(1)
    {
        gets(p);

        if(strcmp(p,"stop")==0)
        {
            break;
        }

        fputs(p,fs);
        fputs("\n",fs);
    }

    fclose(fs);
    return 0;
}