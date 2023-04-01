/*
   Implement linear queue using Linked List. 
*/

#include<stdio.h>   
#include<stdlib.h>  

struct node   
{  
    int data;   
    struct node *next;  
};  

struct node *front;  
struct node *rear;

void insert()  
{  
    int data;

    struct node *ptr;         
    ptr = (struct node *) malloc (sizeof(struct node));  

    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW!!!\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter data : \n");  
        scanf("%d",&data);  

        ptr -> data = data;

        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;

            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;

            rear = ptr;

            rear->next = NULL;  
        } 

    }  
    
    return;
}     
 
void delete ()  
{  
    struct node *ptr;  
    
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW!!!\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  

        front = front -> next;  
        
        free(ptr);  
    }  
    
    return;
} 

void display()  
{  
    struct node *ptr;  
    ptr = front;  

    if(front == NULL)  
    {  
        printf("\nEmpty Queue!!!\n");  
    }  
    else  
    {   
        printf("\nQueue Data : \n"); 

        while(ptr != NULL)   
        {  
            printf("%4d",ptr -> data);  
            ptr = ptr -> next;  
        } 

    }  
    
    return;
}  
 


int main ()  
{  
   int opt;   

   while(1)   
   {     
        printf("\n*** Linear queue using Linked List ***\n");  
        printf("\nMenu\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\nOption : ");    
        scanf("%d",&opt);

        if( opt > 3 )
        {
            break;
        }

        switch(opt)  
        {  
            case 1:  
                insert();  
                break; 

            case 2:  
                delete();  
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


