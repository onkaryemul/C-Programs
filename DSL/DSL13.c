/*
    Implementation of Sorting Methods : merge sort
*/

// Merge Sort ----> Huge Data

#include<stdio.h>

#define M 10

void input(int *a)
{
    printf("\nEnter 10 elements to store in an array : ");
    
    for(int i=0;i<M;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",(a+i));
    }
    
    return;
}

void display(int *a , int flg)
{
    printf( (flg == 0)? "\nBefore Sorting :\n" : "\nAfter Sorting :\n" );
    
    for(int i=0;i<M;i++)
    {
        printf("%4d",*(a+i));
    }
    
    return;    
}

void merge(int *a)
{
    int i,j,k;
    int l1,u1,l2,u2;
    int size=1;
    int tmp[M];

    while(size < M)
    {
        l1 = 0;
        k = 0;

        while( (l1+size) < M)
        {
            l2 = l1 + size;

            u1 = l2 - 1;
            
            if((l2+size) < M)
            {
                u2 = l2 + size - 1;
            }
            else
            {
                u2 = M - 1;
            }

            for( i=l1 , j=l2 ; i<=u1 && j<=u2 ; k++)
            {
                if(a[i] < a[j])
                {
                    tmp[k] = a[i++];
                }
                else
                {
                    tmp[k] = a[j++];
                }
            }

            for( ; i<=u1 ; i++)
            {
                tmp[k++] = a[i];
            }

            for( ; j<=u2 ; j++)
            {
                tmp[k++] = a[j];
            }

            l1 = u2 + 1;
        } // Inner while loop
        
        for(i=l1 ; i<M ; i++)
        {
            tmp[k++] = a[i];
        }

        for(i=0 ; i<M ; i++)
        {
            a[i] = tmp[i];
        }

        size *= 2;
    } // Outer while loop
    
    return;
}



int main()
{
    int x[M];

    printf("\n*** Merge Sort : ***\n");

    input(x);

    display(x,0);

    merge(x);

    display(x,1);

    return 0;
}



