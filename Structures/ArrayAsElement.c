//Use of array as element of structure

#include<stdio.h>

typedef struct result
{
    int rno;
    int mrk[5];
}RESULT;

int main()
{
    RESULT a;

    int i=0,tot=0;

    printf("Roll No.: ");
    scanf("%d",&a.rno);

    printf("Marks:");
    for(i=0;i<5;i++)
        scanf("%d",&a.mrk[i]);

    printf("\nResult\nRoll No.: %d",a.rno);
    printf("\nMarks: ");
    for(i=tot=0;i<5;i++)
    {
        printf("%4d",a.mrk[i]);
        tot+=a.mrk[i];
    }

    printf("\nTotal: %d",tot);

    return 0;
    
}