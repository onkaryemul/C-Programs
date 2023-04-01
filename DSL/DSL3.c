/*
   Develop a program to reverse a singly linked list.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

typedef struct slist
{
    NODE *st;
    int cnt;
} SLIST;

// function to initialize SLIST
void init(SLIST *t)
{
    t->st = NULL;
    t->cnt = 0;
}

// function to create new NODE
NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;

    return a;
}

// function to retrieve last NODE
NODE *getLastNode(NODE *a)
{
    while (a->next != NULL)
    {
        a = a->next;
    }

    return a;
}

// function to add new NODE at End
void addEnd(SLIST *t, int d)
{
    NODE *a, *b;

    a = createNode(d);

    if (t->st == NULL)
    {
        t->st = a;
    }
    else
    {
        b = getLastNode(t->st);
        b->next = a;
    }

    t->cnt++;
}

// function to add new NODE at Begin
void addBeg(SLIST *t, int d)
{
    NODE *a;

    a = createNode(d);

    a->next = t->st;

    t->st = a;

    t->cnt++;
}

// function to display list data
void display(SLIST *t)
{
    NODE *a = t->st;

    if (t->st == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        printf("\nData:\n");

        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

// function to reverse the list
void reverse(SLIST *t)
{
    NODE *a = t->st, *b, *c = NULL;

    while (a != NULL)
    {
        b = a->next;
        a->next = c;
        c = a;
        a = b;
    }

    t->st = c;
}


int main()
{
    int opt, d;

    SLIST p,q;

    init(&p);
    init(&q);

    while (1)
    {
        printf("\nSingle Linked List\n1.Add End\n2.Add Beg\n3.Display\n4.Reverse List\n5.Exit\nOption: ");
        scanf("%d", &opt);

        if (opt > 4)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            printf("\nData at End: ");
            scanf("%d", &d);
            addEnd(&p, d);
            break;

        case 2:
            printf("\nData at Begin: ");
            scanf("%d", &d);
            addBeg(&p, d);
            break;

        case 3:
            display(&p);
            break;

        case 4:
            if (p.st == NULL)
            {
                printf("\nEmpty List");
            }
            else
            {
                reverse(&p);
            }
            break;

        }

    }
    
    return 0;
}



