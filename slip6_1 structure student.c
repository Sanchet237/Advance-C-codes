//Write C program to accept student information (rollno, name, marks) and display same information using structure.
#include <stdio.h>
struct Student 
{
    int rollno;
    char name[50];
    float marks;
}s;

int main() 
{
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

