//Program to copy source file "abc.txt" with new name "pqr.txt"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    char ch;

    f1=fopen("abc.txt","r"); //source

    if(f1==NULL)
    {
        printf("\nFile Not Found!");
        return 0;
    }

    f2=fopen("pqr.txt","w"); //destination
    
    while(1)
    {
        ch=fgetc(f1);

        if(feof(f1))
           break;

        fputc(ch,f2);        
    }
   
    fclose(f1);
    fclose(f2);

    return 0;
}