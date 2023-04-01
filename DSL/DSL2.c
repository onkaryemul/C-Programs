/*
  Program based on File handling and command line arguments,
  Implementation of recursion. (Tower of Hanoi problem)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod); 
//function prototype

int main(int argc,char* argv[])
{
  //File Handling
  //Program to write data into file
    char name[50];
    int marks;
    int i;
    int num;

    printf("Enter number of students: ");
    scanf("%d",&num);

    FILE *fptr1; // Creating file pointer

    fptr1=fopen("student.txt","w");// opening "student.txt" file in write mode

    if(fptr1==NULL)
    {
        printf("Error!\nFile does not exist.");
        return 0;
    }

    for(i=0;i<num;i++)
    {
        printf("\nFor Student %d\nEnter name: ",i+1);
        scanf("%s",name);

        printf("Enter marks: ");
        scanf("%d",&marks);

        fprintf(fptr1,"\nName:%s\nMarks=%d\n",name,marks);
    }

    fclose(fptr1); // closing "student.txt" file

  //Program to read the file line by line
    char p[80];

    FILE *fs;
    fs=fopen("line.txt","r");

    printf("\nString:\n");
    while(1)
    {
        fgets(p,79,fs);

        if(feof(fs))
        {
            break;
        }

        puts(p);
    }

    fclose(fs);
    
  // Command line arguments
    int counter;

    printf("\nProgram Name Is: %s\n",argv[0]);

    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name\n");

    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d\n",argc);
        printf("\n----Following Are The Command Line Arguments Passed----\n");
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
    }
    

 //Implementation of Recursion using Tower of Hanoi Problem
    int N;

    printf("\nEnter number of disks : ");
    scanf("%d",&N);
    
    printf("\nThe sequence of moves involved in the Tower of Hanoi are :\n ");
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');

    return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod,
                  char aux_rod)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    printf("\nMove disk %d from rod %c to rod %c\n" , n , from_rod , to_rod);

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 