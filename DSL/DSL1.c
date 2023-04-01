//Program based on structures and pointers in C

#include<stdio.h>

struct person{
    int age;
    char name[20];
    float weight;
};

int main()
{
    struct person *personPtr,person1;
    personPtr=&person1;

    printf("\nAccessing structure element without using Pointer:");
    printf("\nEnter age: ");
    scanf("%d",&person1.age);

    printf("\nEnter weight: ");
    scanf("%f",&person1.weight);

    printf("\nEnter name: ");
    scanf("%s",person1.name);

    printf("\nDISPLAYING WITHOUT USING POINTER\n");
    printf("Age: %d\n",person1.age);
    printf("Weight: %0.2f\n",person1.weight);
    printf("Name:%s\n",person1.name);


    printf("\nAccessing structure element using Pointer:");
    printf("\nEnter age: ");
    scanf("%d",&personPtr->age);

    printf("\nEnter weight: ");
    scanf("%f",&personPtr->weight);

    printf("\nEnter name: ");
    scanf("%s",personPtr->name);

    printf("\nDISPLAYING USING POINTER\n");
    printf("Age: %d\n",personPtr->age);
    printf("Weight: %0.2f\n",personPtr->weight);
    printf("Name:%s",personPtr->name);

    return 0;
}