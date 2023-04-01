//File handling and command line arguments

#include<stdio.h>

int main()
{
    char name[50];
    int marks;
    int i;
    int num;

    printf("Enter number of students: ");
    scanf("%d",&num);

    FILE *fptr; // Creating file pointer

    fptr=fopen("student.txt","w");// opening "student.txt" file in write mode

    if(fptr==NULL)
    {
        printf("Error!\nFile does not exist.");
        return 0;
    }

    for(i=0;i<num;i++)
    {
        printf("for student%d\nEnter name: ",i+1);
        scanf("%s",name);

        printf("Enter marks: ");
        scanf("%d",&marks);

        fprintf(fptr,"\nName:%s\nMarks=%d\n",name,marks);
    }

    fclose(fptr); // closing "student.txt" file

    return 0;
}

