#include <stdio.h>

union Student {
    char name[20];
    char subject[20];
    float percentage;
};

int main() 
{
    union Student student1, student2;

    printf("Enter name of student 1: ");
    scanf("%s", student1.name);
    printf("Enter subject of student 1: ");
    scanf("%s", student1.subject);
    printf("Enter percentage of student 1: ");
    scanf("%f", &student1.percentage);

    printf("Enter name of student 2: ");
    scanf("%s", student2.name);
    printf("Enter subject of student 2: ");
    scanf("%s", student2.subject);
    printf("Enter percentage of student 2: ");
    scanf("%f", &student2.percentage);
    
    printf("\nStudent 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Subject: %s\n", student1.subject);
    printf("Percentage: %.2f\n", student1.percentage);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Subject: %s\n", student2.subject);
    printf("Percentage: %.2f\n", student2.percentage);

    return 0;
}

