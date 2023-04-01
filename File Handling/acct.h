//Create a header file with name "acct.h" and define data type & appropriate function to read and write account data

//Header File: acct.h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct account
{
    int acno;
    char acnm[15];
    int acopnbal;
}ACCT;

//function to update ACCT type data
void input(ACCT *a,int no)
{
    a->acno=no;

    printf("\nA/c Name: ");
    scanf("%s",a->acnm);
  //gets(a->acnm);

    printf("\nOpening Balance: ");
    scanf("%d",&a->acopnbal);

}

//function to display ACCT data
void display(ACCT *a)
{
    printf("\nA/c Data:\n");
    printf("\nNo.:%d\nName:%s\nOpening Balance:%d",a->acno,a->acnm,a->acopnbal);

}

