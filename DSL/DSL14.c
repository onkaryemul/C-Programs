/*
    Implementation of hashing
*/

#include<stdio.h>
#include<stdlib.h>


// Hash Function
int hash(int no)
{
    return ( no%10 ); // Modulo-division method
}


// Collision Resolution using Linear Probing
struct student1
{
    int no;
    char nm[15];
}p1[10];

void init1()
{
    for(int i=0;i<10;i++)
    {
        p1[i].no = 0;

        p1[i].nm[0]='\0';
    }

    return;
}


void insert1()
{
    int no , hval , i=0;

    while(1)
    {
        printf("\nRoll No. : ");
        scanf("%d",&no);

        if(no == 0)
        {
            break;
        }

        hval = hash(no);

        if( p1[hval].no == 0 ) // home address
        {
            p1[hval].no = no;

            printf("\nName : ");
            scanf("%s",p1[hval].nm);

            printf("\nInsertion at home address\n");

            continue;
        }

        printf("\nCollision Occured\n");

        for(i=hval+1 ; i<10 ; i++)
        {
            if( p1[i].no == 0)
            {
                p1[i].no = no;

                printf("\nName : ");
                scanf("%s",p1[i].nm);

                printf("\nInsertion on collision path\n");

                break;
            }
        }

        if( i < 10 )
        {
            continue;
        }

        for(i=0 ; i < hval ; i++)
        {
            if( p1[i].no == 0)
            {
                p1[i].no = no;

                printf("\nName : ");
                scanf("%s",p1[i].nm);

                break;
            }
        }

        if( i == hval )
        {
            printf("\nOverflow\n");
        }

    }
    
    return;
}

void search1()
{
    int no , hval , i=0;

    while(1)
    {
        printf("\nEnter Roll No. to search : ");
        scanf("%d",&no);

        if( no == 0)
        {
            break;
        }

        hval = hash(no);

        if( p1[hval].no == no ) // home address
        {
            printf("\nName : ");
            printf("%s",p1[hval].nm);

            printf("\nFound at home address\n");

            continue;
        }

        printf("\nSearch on Collision Path\n");
        for(i=hval+1 ;i<10; i++)
        {
            if( p1[i].no == no )
            {
                printf("\nName : ");
                printf("%s",p1[i].nm);

                printf("\nFound on Collision path\n");

                break;
            }

        }

        if( i < 10)
        {
            continue;
        }

        for(i=0 ; i < hval ; i++)
        {
            if( p1[i].no == no )
            {
                printf("\nName : ");
                printf("%s",p1[i].nm);

                printf("\nFound\n");

                break;
            }
        }

        if( i == hval)
        {
            printf("\nNot Found\n");
        }

    }
    
    return;
}

void linearProbe()
{
    int opt;
    
    init1();

    while(1)
    {
         printf("\n*** Collision Resolution using linear Probing : ***\n");
         printf("\nMenu\n1.Insert\n2.Search\n3.Exit\nOption : ");
         scanf("%d",&opt);

         if(opt>2)
         {
            break;
         }       

         switch(opt)
         {
             case 1:
                 insert1();
                 break;

             case 2:
                 search1();
                 break;

             default:   
                 printf("\nEnter valid option !!!\n");
         }           
            
    }

    return;
}


// Linked List Resolution
struct student2
{
    int no;
    char nm[15];
    struct student2 *next;
}p2[10];

void init2()
{
    for(int i=0;i<10;i++)
    {
        p2[i].no = 0;

        p2[i].next = NULL;

    }

    return;
}

struct student2 *createNode(int n)
{
    struct student2 *a;

    a = (struct student2 *)malloc(sizeof(struct student2));

    a->no = n;

    printf("\nEnter Name : ");
    scanf("%s",a->nm);

    a->next = NULL;

    return a;
}



void insert2()
{
    int no,hval;

    struct student2 *a,*b;

    while(1)
    {
        printf("\nEnter Roll No. : ");
        scanf("%d",&no);

        if( no == 0)
        {
            break;
        }

        hval = hash(no);

        if( p2[hval].no == 0)
        {
            p2[hval].no = no;

            printf("\nEnter Name : ");
            scanf("%s",p2[hval].nm);

            printf("\nInserted in Prime area\n");
        }
        else
        {
            a = createNode(no);

            b = p2[hval].next;

            a->next = b;

            p2[hval].next = a;

            printf("\nInserted in a Overflow area\n");
        }

    }
    
    return;
}

void search2()
{
    int no,hval;

    struct student2 *a;

    while(1)
    {
        printf("\nEnter Roll No. to search : ");
        scanf("%d",&no);

        if( no == 0)
        {
            break;
        }

        hval = hash(no);

        if( p2[hval].no == no )
        {
            printf("\nName : %s ",p2[hval].nm);
            printf("\nRecord Found in Prime area\n");
        }
        else
        {
            a = p2[hval].next;

            while(a != NULL)
            {
                if(a->no == no)
                {
                    break;
                }

                a = a->next;
            }

            if( a == NULL)
            {
                printf("\nRecord Not Found\n");
            }
            else
            {
                printf("\nName : %s\nRecord Found in Overflow area\n",a->nm);
            }

        }

    }
    
    return;
}

void linkedList()
{
    int opt;
    
    init2();

    while(1)
    {
         printf("\n*** Linked List Resolution : ***\n");
         printf("\nMenu\n1.Insert\n2.Search\n3.Exit\nOption : ");
         scanf("%d",&opt);

         if(opt>2)
         {
            break;
         }       

         switch(opt)
         {
             case 1:
                 insert2();
                 break;

             case 2:
                 search2();
                 break;

             default:   
                 printf("\nEnter valid option !!!\n");
         }           
            
    }

    return;
}



int main()
{
    int opt;
    
    while(1)
    {   
        printf("\n****** Implementation of Hashing : *****\n");
        printf("\nMenu\n1.Collision Resolution using Linear Probing\n2.Linked List Resolution\n3.Exit\nOption : ");
        scanf("%d",&opt);

        if(opt>2)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                linearProbe();
                break;

            case 2:
                linkedList();
                break;

            default:   
                 printf("\nEnter valid option !!!\n");

        }
    }

    return 0;
}




