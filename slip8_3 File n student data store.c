//Write C program to store n student information(rollno, name, percentage) in file and display the same.
#include <stdio.h>
struct Student 
{
    int rollno;
    char name[50];
    float percentage;
}s;

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL) 
	{
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s.rollno);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Percentage: ");
        scanf("%f", &s.percentage);

        fprintf(fp, "%d %s %.2f\n", s.rollno, s.name, s.percentage);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent Information:\n");
    while (fscanf(fp, "%d %s %f", &s.rollno, s.name, &s.percentage) != EOF) 
	{
        printf("Roll Number: %d, Name: %s, Percentage: %.2f\n", s.rollno, s.name, s.percentage);
    }
    
    fclose(fp);

    return 0;
}

