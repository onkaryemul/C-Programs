/*
    Implementation of searching : linear search , binary search
*/

#include<stdio.h>

// Sequential Search
void seqSearch()
{
    int arr[10];
    int sv;
    int i;
    
    printf("\n*** Sequential Search : ***\n");
    printf("\nEnter 10 elements to store in an array : ");
    for(i=0;i<10;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter search value : ");
    scanf("%d",&sv);

    for(i=0;i<10;i++)
    {
        if(arr[i]==sv)
        {
            break;
        }
    }
    
    if(i==10)
    {
        printf("\nNot Found");
    }
    else
    {
        printf("\nFound at position %d \n",i);
    }

    return;
}


// Ordered List
//  Binary Search ---> Sorted List
void binSearch()
{
    int arr[10];
    int l,r,mid;
    int sv;
  
    int i=0;
    
    printf("\n*** Binary Search : ***\n");
    printf("\nEnter 10 elements to store in an array in an incresing order : ");
    while(i < 10)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);

        if(i>0)
        {
            if(arr[i] < arr[i-1])
            {
                printf("\nInvalid Input!\n");
                continue;
            }
        }

        i++;
    }

    printf("\nSearch Value : ");
    scanf("%d",&sv);

    l=0,r=9;

    do
    {
        mid = (l+r)/2;

        if(arr[mid] == sv)
        {
            break;
        }

        if(sv < arr[mid])
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }

    } while(l <= r);

    if(l <= r)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot Found\n");
    }
 
    return;
}



int main()
{
    int opt;

    while(1)
    {
        printf("\nMenu\n1.Sequential Search\n2.Binary Search\n3.Exit\nOption : ");
        scanf("%d",&opt);

        if(opt>2)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                seqSearch();
                break;

            case 2:
                binSearch();
                break;

            default:   
                 printf("\nEnter valid option !!!\n");
        }

    }

    return 0;
}



