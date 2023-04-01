/*
   Develop a program to implement two stacks using array.
*/

#include <stdio.h>  

#define SIZE 20  

int array[SIZE];  // declaration of array type variable.  

int top1 = -1;  

int top2 = SIZE;  
   
//Function to push data into stack1  
void push1 (int data)  
{  
  //checking the overflow condition  
  if (top1 < top2 - 1)  
  {  
      top1++;  
      array[top1] = data;  
  }  
  else  
  {  
      printf ("\nStack is full --> Overflow\n");  
  }  
}  

// Function to push data into stack2  
void push2 (int data)  
{  
  //checking overflow condition    
  if (top1 < top2 - 1)  
  {  
      top2--;  
      array[top2] = data;   
  }  
  else  
  {  
      printf ("\nStack is full --> Overflow \n");  
  }  
}  
   
//Function to pop data from the Stack1  
void pop1 ()  
{  
  //Checking the underflow condition   
  if (top1 >= 0)  
  {  
      int popped_element = array[top1];  
      top1--;  
     
      printf ("\n%d is being popped from Stack 1\n", popped_element);  
  }  
  else  
  {  
      printf ("\nStack is Empty --> Underflow \n");  
  }  
}  

// Function to remove the element from the Stack2  
void pop2 ()  
{  
  //Checking underflow condition    
  if (top2 < SIZE)  
  {  
      int popped_element = array[top2];  
      top2++;  
     
      printf ("\n%d is being popped from Stack 2\n", popped_element);  
  }  
  else  
  {  
      printf ("\nStack is Empty --> Underflow\n");  
  }  
}  
   
//Functions to Print the values of Stack1  
void display_stack1 ()  
{  
  int i;  
  for (i = top1; i >= 0; --i)  
  {  
    printf ("%4d", array[i]);  
  }  
  printf ("\n");  
} 

// Function to print the values of Stack2  
void display_stack2 ()  
{  
  int i;  
  for (i = top2; i < SIZE; ++i)  
  {  
    printf ("%4d ", array[i]);  
  }  
  printf ("\n");  
}  


int main()  
{  
  int opt,data;

  printf("\n*** Two Stacks in one array operation ***\n");

  while(1)
  {
      printf("\nMenu\n1.Push into stack1\n2.Push into stack2\n3.Pop from stack1\n4.Pop from stack2\n5.Display Stack1\n6.Display Stack2\n7.Exit\nOption : ");
      scanf("%d",&opt);

      if(opt > 6)
      {
         break;
      }

      switch(opt)
      {
          case 1:
              printf("\nEnter data : ");
              scanf("%d",&data);
              push1(data);
              break;

          case 2:
              printf("\nEnter data : ");
              scanf("%d",&data);
              push2(data);
              break;

          case 3:
              pop1();
              break;

          case 4:
              pop2();
              break;

          case 5:
              display_stack1();
              break;

          case 6:
              display_stack2();
              break;

          default:   
              printf("\nEnter valid option !!!\n");  
         
      }

  }  
   
  return 0;
}



