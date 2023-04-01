//Program to impplement type conversion from MRK to RES

#include<stdio.h>
#include<stdlib.h>

typedef struct marks
{
    int rno;
    int nos;
    int *ptr;
}MRK;

typedef struct result
{
    int rno;
    int tot;
    int avg;
}RES;


void inputMRK(MRK *a)
{
    int i=0;

    printf("\nRoll No.: ");
    scanf("%d",&a->rno);

    printf("Subject Count: ");
    scanf("%d",&a->nos);

    a->ptr=(int *)malloc(a->nos*sizeof(int));

    printf("Marks: ");
    for(i=0;i<a->nos;i++)
       scanf("%d",(a->ptr+i));

}

void displayMRK(MRK *b)
{
    int i=0;

    printf("\nRoll No.: %d",b->rno);

    printf("\nMarks: ");
    while(i<b->nos)   
    {   
        printf("%4d",*(b->ptr+i));
        i++;
    }

}

void convert(RES *b,MRK *a)
{
    int i=0,tot=0;

    b->rno=a->rno;

    while(i<a->nos)
    {
        tot+=*(a->ptr+i);
        i++;
    }

    b->tot=tot;
    b->avg=tot/a->nos;

}

void displayRES(RES *a)
{
    printf("\nResult:");
    printf("\nRoll No.: %d",a->rno);
    printf("\nTotal: %d",a->tot);
    printf("\nAverage: %d",a->avg);

}

int main()
{
    MRK a;
    RES b;

    inputMRK(&a);
    displayMRK(&a);

    convert(&b,&a);
    displayRES(&b);

    return 0;
}