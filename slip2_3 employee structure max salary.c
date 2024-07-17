#include <stdio.h>

struct Employee
{
    int eno;
    char ename[50]; 
    int salary;
} e[10];

int main()
{
    int n, i,max=0;
    printf("Enter number of employees' data you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
    	printf("Enter data %d employee ",i+1);
        printf("\nEnter eno: ");
        scanf("%d", &e[i].eno);
        printf("Enter ename: ");
        scanf("%s", e[i].ename); 
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        if(e[i].salary>max)
            max=e[i].salary;
    }

    printf("\nDisplaying Employee with Max Salary:");
    for(i=0;i<n;i++)
    {   
        if(e[i].salary==max)
        {
            printf("\neno:%d",e[i].eno);
            printf("\nename:%s",e[i].ename);
            printf("\nsalary:%d\n",e[i].salary);
        }
    }
    return 0;
}
