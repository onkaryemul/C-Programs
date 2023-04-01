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

    printf("\nRoll No.: ");
    scanf("%d",&a.rno);

    printf("\nName: ");
    scanf("%s",a.nm);

    printf("\nMarks: ");
    scanf("%d",&a.mrk);

    printf("\nRecord\n");
    printf("\nRoll No.:%d\nName:%s\nMarks:%d\n",a.rno,a.nm,a.mrk);
    
    return 0;
}