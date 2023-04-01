//Create a header file "book.h" and define data type and fumction to update and display

#include<stdio.h>

typedef struct book
{
    int bno;
    char bnm[20];
    int bprice;
}BOOK;

//function to update
void input(BOOK *a)
{
    printf("\nBook Data:\n");

    printf("No: ");
    scanf("%d",&a->bno);

    printf("Name: ");
    scanf("%s",a->bnm);

    printf("Price: ");
    scanf("%d",&a->bprice);

    printf("\n");
}

//function to display
void display(BOOK p)
{
    printf("\nBOOK Data\nNo.:%d\nName:%s\nPrice:%d",p.bno,p.bnm,p.bprice);
    printf("\n");
}