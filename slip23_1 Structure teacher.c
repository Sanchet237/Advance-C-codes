//Write C program to accept teacher information (teacherid, name, qualification, salary) and display same information using structure.
#include<stdio.h>

struct teacher
{
	int tid;
	char name[10];
	char qlf[10];
	float sal;
}t;
void main()
{
	
	printf("\n ENTER THE DETAILS :");
	printf("\n Enter the teacher id : ");
	scanf("%d",&t.tid);
	printf("\n Enter the name :");
	scanf("%s",t.name);
	printf("\n Enter the qualification :");
	scanf("%s",t.qlf);
	printf("\n Enter the salary :");
	scanf("%f",&t.sal);
	printf("\n Teacher_id\t Name\t\t Qualification\t\t Salary ");
	printf("\n %d \t\t %s \t\t %s \t\t\t %.2f\n ",t.tid,t.name,t.qlf,t.sal);
	
}

