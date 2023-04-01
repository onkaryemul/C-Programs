/*
    Implement operations on Circular Queue.
*/

// Circular Queue

#include<stdio.h>

#define MAX 6

int queue[MAX]; // arary declaration
int front = -1;
int rear = -1;

// function to insert an element in 
void enqueue(int data)
{
    if( front==-1 && rear==-1 ) //condition to check queue is empty
    {
        front=0;
        rear=0;
        queue[rear]=data;
    }
    else if( (rear+1)%MAX == front) // condition to check queue is full
    {
        printf("\nQueue is OVERFLOW!\n");
    }
    else
    {
        rear = (rear+1)%MAX; // rear is incremented
        queue[rear] = data;
    }

    return;
}


// function to delete the element fr
void dequeue()
{
    if( (front==-1) && (rear==-1) ) // condition to check queue is empty
    {
        printf("\nQueue is UNDERFLOW!\n");
    }
    else if( front == rear )
    {
        printf("\nThe dequeued element is %d\n",queue[front]);
        front =- 1;
        rear =- 1;
    }
    else
    {
        printf("\nThe dequeued element is %d\n",queue[front]);
        front = (front+1)%MAX;
    }

    return;
}


// function to display the elements of a queue
void display()
{
    int i = front;

    if( front==-1 && rear==-1 )
    {
        printf("\nQueue is EMPTY!\n");
    }
    else
    {
        printf("\nElements in a Queue are : ");
        while(i<=rear)
        {
            printf("%4d",queue[i]);
            i = (i+1)%MAX;
        }
    }

    return;
}


int main()
{
    int opt,data;

    while(1)
    {
        printf("\n*** Array Implementation of Circular Queue ***\n");
        printf("\nMenu\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\nOption : ");    
        scanf("%d",&opt);

        if(opt>3)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                 printf("\nData : ");
                 scanf("%d",&data);
                 enqueue(data);
                 break;

            case 2:
                 dequeue();
                 break;

            case 3:
                 display();
                 break;

            default:   
                 printf("\nEnter valid option !!!\n");
                 
        }

    }

    return 0;
}



