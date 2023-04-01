//Program to Implement Search Operation roll number wise

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fs;
    int no,mrk,rno,flg=0;
    char nm[15];
    fs=fopen("Stu.txt","r");

    if(fs==NULL)
    {
        printf("\nFile Not Found");
        return 0;
    }

    printf("\nEnter Roll no. to search: ");
    scanf("%d",&rno);

    while(1)
    {
        fscanf(fs,"%d %s %d",&no,nm,&mrk);

        if(feof(fs))
        {
            break;
        }

        if(rno==no)
        {
            flg=1;
            break;
        }
    }

    fclose(fs);

    if(flg==0)
    {
        printf("\nNot");
    }

    printf("\nFound");
    
    return 0;
}