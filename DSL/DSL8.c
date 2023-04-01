/*
    Implement recursive Preorder,Inorder and Postorder tree
    traversals
*/

//  Program to create and traverse Binary Search Tree


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;    
}NODE;

typedef struct btree
{
    NODE *rt; // Root NODE
    NODE *prnt; // Parent NODE
    NODE *curr; // Curr NODE
}BST;

void init(BST *t)
{
    t->rt = NULL;
    t->curr = t->prnt = NULL;
}

NODE *createNode(int d)
{
    NODE *a;

    a = (NODE *)malloc(sizeof(NODE));

    a->data = d;
    a->left = a->right = NULL;

    return a;
}

// Pre-Order
void preOrder(NODE *a)
{
    if(a != NULL)
    {
        printf("%4d",a->data);

        preOrder(a->left);

        preOrder(a->right);
    }
    else
    {
        return;
    }

}

// In-Order
void inOrder(NODE *a)
{
    if(a != NULL)
    {
        inOrder(a->left);

        printf("%4d",a->data);

        inOrder(a->right);
    }
    else
    {
        return;
    }

}

// Post-Order
void postOrder(NODE *a)
{
    if(a != NULL)
    {
        postOrder(a->left);

        postOrder(a->right);

        printf("%4d",a->data);
    }
    else
    {
        return;
    }

}

void createBST(BST *t)
{
    NODE *a,*b;

    int d;

    while(1)
    {
        printf("\nData : ");
        scanf("%d",&d);

        if( d == 0 )
        {
            break;
        }

        if( t->rt == NULL )
        {
            t->rt = createNode(d);
        }
        else
        {
            
            a = t->rt;

            while(1)
            {
                if( d < a->data)
                {
                    if( a->left == NULL)
                    {
                        b = createNode(d);

                        a->left = b;

                        break;
                    }
                    else
                    {
                        a = a->left;
                    }

                }
                else
                {
                    if( a->right == NULL)
                    {
                        b = createNode(d);

                        a->right = b;

                        break;
                    }
                    else
                    {
                        a = a->right;
                    }

                }

            }

        }

    }

    return;
}



int main()
{
    BST p;

    int opt;

    init(&p);

    while(1)
    {
        printf("\n*** Recursive Preorder,Inorder and Postorder Tree Traversals : ***\n");
        printf("\nMenu\n1.Create BST\n2.PreOrder\n3.InOrder\n4.PostOrder\n5.Exit\nOption : ");
        scanf("%d", &opt);

        if(opt > 4)
        {
            break;
        }

        switch(opt)
        {
            case 1: 
                createBST(&p);
                break;

            case 2:
                printf("\nPre Order : \n");
                preOrder(p.rt);
                break;

            case 3:
                printf("\nIn Order : \n");
                inOrder(p.rt);
                break;

            case 4:
                printf("\nPost Order : \n");
                postOrder(p.rt);
                break;
            
            default:
                printf("\nEnter valid option !!!\n");
                  
        }

    }

    return 0;
}



