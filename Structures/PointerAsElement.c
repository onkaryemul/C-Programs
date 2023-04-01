//Use of pointers as element of structure

#include<stdio.h>
#include<stdlib.h>

typedef struct marks
{
   int rno;
   int nos;
   int *ptr;
}MRK;

int main()
{
   MRK p;

   int i=0,tot=0;

   printf("\nRoll No.: ");
   scanf("%d",&p.rno);

   printf("\nEnter subject count: ");
   scanf("%d",&p.nos);

   p.ptr=(int *)malloc(p.nos*sizeof(int));

   printf("\nMarks: ");
   for(i=0;i<p.nos;i++)
       scanf("%d",(p.ptr+i));

    printf("\nSTUDENT RECORD:\n");
    printf("\nRoll No.: %d",p.rno);
    printf("\nMarks: ");
    for(i=tot=0;i<p.nos;i++)
    {
        printf("%4d",*(p.ptr+i));
        tot+=*(p.ptr+i);
    }

    printf("\nTotal: %d",tot);

    free(p.ptr);

   return 0;
}