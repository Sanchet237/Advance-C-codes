//Write C Program to store n employee information (eno,ename,salary) in file and display same.
#include <stdio.h>
struct Employee 
{
    int eno;
    char ename[50];
    int salary;
} e[10];

int main() 
{
    FILE *fp;
    int n, i;

    fp = fopen("employee.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &e[i].eno);
        printf("Employee Name: ");
        scanf("%s", e[i].ename);
        printf("Salary: ");
        scanf("%d", &e[i].salary);

        fprintf(fp, "%d %s %d\n", e[i].eno, e[i].ename, e[i].salary);
    }
    
    fclose(fp);

    fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployee Information:\n");
    for (i = 0; i < n; i++) {
        fscanf(fp, "%d %s %d", &e[i].eno, e[i].ename, &e[i].salary);
        printf("Employee Number: %d\n", e[i].eno);
        printf("Employee Name: %s\n", e[i].ename);
        printf("Salary: %d\n", e[i].salary);
        printf("\n");
    }

    fclose(fp);

    return 0;
}

