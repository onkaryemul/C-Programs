//Create a new file named "Keyword.txt" which contains 32 keywords

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[20];
    FILE *fs;
    
    fs=fopen("Keyword.txt","w");

    printf("\nEnter Keywords in C:\n");
  /* while(1)
    {
        gets(p);

        if(strcmp(p,"stop")==0)
        {
            break;
        }

        fputs(p,fs);
        fputs("\n",fs);
    }
  */

   
    int i=1;
    while(i<=32)
    {
        gets(p);
        fputs(p,fs);
        fputs("\n",fs);

        i++;
    }

    fs=fopen("Keyword.txt","r");

    printf("\nKeywords:\n");
    while(1)
    {
        fgets(p,19,fs);

        if(feof(fs))
        {
            break;
        }

        puts(p);
    }

    char tmp[20];
    int flg=0;

    fs=fopen("Keyword.txt","r");

    if(fs==NULL)
    {
        printf("\nFile Not Found");
        return 0;
    }

    printf("\nEnter keywor to search: ");
    gets(tmp);

    while(1)
    {
        fgets(p,19,fs);

        if(feof(fs))
        {
            break;
        }

        if(strcmp(p,tmp)==0)
        {
            flg=1;
            break;
        }
    }

    fclose(fs);

    if(flg==0)
    {
        printf("\nNot ");
    }

    printf("Found");
    
    return 0;
}