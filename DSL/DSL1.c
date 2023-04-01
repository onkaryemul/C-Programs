/*
  Program based on structures and pointers, arrays and pointers 
  in C. 
*/

#include<stdio.h>

typedef struct result
{
    int rno;
    int mrk[5];
}RESULT;

int main()
{
 //Program based on Structures and pointers in C
    RESULT a;
    RESULT *b=&a;

    int i=0,tot=0;

    printf("Roll No.: ");
    scanf("%d",&a.rno);

    printf("Marks:");
    for(i=0;i<5;i++)
    {
       scanf("%d",&a.mrk[i]);
    }
    printf("\n*** Result ***\nRoll No.: %d",b->rno);
    printf("\nMarks: ");
    for(i=tot=0;i<5;i++)
    {
        printf("%4d",b->mrk[i]);
        tot+=b->mrk[i];
    }

    printf("\nTotal Marks : %d",tot);

 //Program based on arrays and pointers in C
    int arr[5];
    int sum=0;
    int *p;

    p=arr;//pointer p holds the base address of array arr

    printf("\nEnter 5 numbers : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);  
    }

    printf("\nElements in the array : \n");
    for(int i=0;i<5;i++)
    {
        printf("arr[%d]=%d\n",i,*(p+i));
        sum += *(p+i);
    }

    printf("Sum = %d\n",sum);

    return 0;  
}