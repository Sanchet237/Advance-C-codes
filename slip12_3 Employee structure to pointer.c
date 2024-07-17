//Write C program to create employee having fields emp_id, emp_name, designation. Pass this entire structure to function and display the structure elements using pointers.
#include<stdio.h>

struct employee
{
	int emp_id;
	char emp_name[10];
	char desg[10];
}e;
void display(struct employee *);
void main()
{
	int i,n;
	
	printf("\nEnter employee details :");
	printf("\nEnter the employee id  : ");
	scanf("%d",&e.emp_id);
	printf("\nEnter the employee name :");
	scanf("%s",e.emp_name);
	printf("\nEnter the employee designation :");
	scanf("%s",e.desg);
	display(&e);
	
}
void display(struct employee *ptr)
{
		printf("\nEmployee id  : ");
		printf("%d",ptr->emp_id);
		printf("\nEmployee name :");
		printf("%s",ptr->emp_name);
		printf("\nEmployee designation :");
		printf("%s",ptr->desg);
}


