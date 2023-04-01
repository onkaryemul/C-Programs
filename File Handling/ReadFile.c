//Program to read characters from the file "abc.txt"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *f1;
    char ch;
    f1=fopen("abc.txt","r");

    if(f1==NULL)
    {
        printf("\nFile Not Found!");
        return 0;
    }

    printf("\nData\n");
    while(1)
    {
       ch=fgetc(f1);

       if(feof(f1))
          break;

       printf("%c",ch);
    }

    fclose(f1);
    return 0;
}