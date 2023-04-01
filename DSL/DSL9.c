/*
    Implement DFS and BFS graph traversal
*/


#include<stdio.h>
#include<stdlib.h>
#define M 10

struct list
{
    int data;
    char ch;
    struct list *next;
}*k[M]; // 20 Bytes memory


struct list *createNode(int d,char ch)
{
    struct list *a;

    a = (struct list *)malloc(sizeof(struct list));

    a->data = d;
    a->ch = ch;
    a->next = NULL;

    return a;
}


// DFS Graph Traversal

int visitedDFS[M];  // visited array

void createListDFS()
{
    int i=1,d;
    char ch;

    struct list *p,*q;

    while(i<M)
    {
        printf("\nVertex : ");
        scanf("%d",&d);

        if(d==0)
        {
            break;
        }

        printf("Its Label : ");
        scanf(" %c",&ch);

        k[i] = p = createNode(d,ch);

        printf("\nEnter Adjacent Vertices : \n");
        while(1)
        {
            scanf("%d",&d);

            if(d==0)
            {
                break;
            }

            p->next = createNode(d,' ');
            p = p->next;         
        }

        i++;
    }

    return;
}


void dfs(int v)
{
    struct list *p;

    visitedDFS[v] = 1;

    p = k[v];

    printf("%c",p->ch);
    
    while(p!=NULL)
    {
        if(visitedDFS[p->data]==0)
        {
            dfs(p->data);
        }
        else
        {
            p = p->next;
        }
    }

    return;
}



// BFS Graph Traversal

int visitedBFS[M];  // visited array

struct queue
{
    int arr[M];
    int fr,rr;
}q;

void init()
{
    q.rr = -1; 
    q.fr = 0;
}

int isEmpty()
{
    return (q.rr < q.fr);
}

void insert(int d)
{
    q.rr++;
    q.arr[q.rr]=d;
}

int remque()
{
    return q.arr[q.fr++];
}


void createListBFS()
{
    int i=1,d;
    char ch;

    struct list *p;

    init();

    while(1)
    {
        printf("\nVertex : ");
        scanf("%d",&d);

        if(d==0)
        {
            break;
        }
        
        printf("Its Label : ");
        scanf(" %c",&ch);

        k[i] = p = createNode(d,ch);

        printf("\n** Enter Adjacent Vertices : **\n ");
        while(1)
        {
            printf("Adjacent Vertex : ");
            scanf("%d",&d);

            if(d==0)
            {
                break;
            }

            printf("Its Label : ");
            scanf(" %c",&ch);

            p->next = createNode(d,ch);
            
            p = p->next;
        }

        i++;
    }

    return;
}

void bfs(int v)
{
    struct list *p;

    visitedBFS[v] = 1;

    p = k[v];

    printf("%c",p->ch);

    insert(v);

    while( ! isEmpty() )
    {
        v = remque();

        p = k[v];

        while(p!=NULL)
        {
            if(visitedBFS[p->data]==0)
            {
                insert(p->data);

                printf("%c",p->ch);

                visitedBFS[p->data] = 1;
            }

            p = p->next;
        }
    }

    return;
}



int main()
{
    int opt;
    
    while(1)
    {
        printf("\n***** Graph Traversal *****\n");
        printf("\nMenu\n1.DFS Traversal\n2.BFS Traversal\n3.Exit\nOption : ");
        scanf("%d",&opt);

        if(opt>2)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                createListDFS();
                printf("\nDFS Traversal --->  ");
                dfs(1);
                printf("\n");
                break;

            case 2:
                createListBFS();
                printf("\nBFS Traversal --->  ");
                bfs(1);
                printf("\n");
                break;

            default:   
                printf("\nEnter valid option !!!\n");
        }

    }

    return 0;
}



