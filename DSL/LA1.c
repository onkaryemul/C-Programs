/*
   Develop a program to display array elements in descending order
   using array pointers.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10],i,j,tmp;
    int *ptr;
    ptr=arr;

    printf("\nEnter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",(ptr+i));
    }
  
  // Selection Sort Method
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[j]>arr[i])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    printf("\nArray Elements in descending order : \n");
    for(i=0;i<10;i++)
    {
        printf("%4d",*(ptr+i));
    }

    return 0;
}