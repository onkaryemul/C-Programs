#include<stdio.h>

struct student
{
   int rno;
   char nm[15];
   int mrk; 
};

int main()
{
    struct student a;

    struct student *b=&a;

    printf("\nRoll No.: ");
    scanf("%d",&b->rno);

    printf("\nName: ");
    scanf("%s",b->nm);

    printf("\nMarks: ");
    scanf("%d",&b->mrk);

    printf("\nRecord\n");
    printf("\nRoll No.:%d\nName:%s\nMarks:%d",b->rno,b->nm,b->mrk);

    return 0;
}