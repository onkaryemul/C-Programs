/*
    Implementation of Sorting Methods : quick sort
*/

// Quick Sort

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
        printf("%4d",a[i]);
    }
    
    return;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}

void pivot(int *a , int l , int r)
{
    if( a[l] > a[r])
    {
        swap( a+l , a+r);
    }

    return;
}

int partition(int *a , int l , int r)
{
    int i=l , j=r , k;

    pivot(a,l,r);

    k = a[l]; // pivot element

    do
    {
        do
        {
            ++i;
        } while (a[i] < k);

        do
        {
            --j;
        } while (a[j] > k);
        
        if(i < j)
        {
            swap( a+i , a+j);
        }
        
    } while ( i < j);

    swap( a+j , a+l);

    return j;
}

void quick(int *a , int l , int r)
{
    int k;

    if(l < r)
    {
        k = partition( a , l , r);

        quick( a , l , k-1);

        quick( a , k+1 ,r);
    }
    
    return;
}


int main()
{
    int x[M];
    
    printf("\n*** Quick Sort : ***\n");
    
    input(x);

    display(x,0);

    quick(x , 0 , M-1);

    display(x , 1);

    return 0;
}



