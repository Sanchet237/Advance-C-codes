// Write C program to accept the student details such as Rollno, Name, Category and Class. Read the details of n number of students. Display the count of students in each category.
#include<stdio.h>

struct student
{
	int rno;
	char name[20];
	char category[10],cls[2];
}s[10];

void main()
{
	int i,n,o=0,ob=0,st=0,nt=0;
	
	printf("\nEnter how many students : ");
	scanf("%d",&n);
	printf("\nEnter student details");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Roll no\n");
		scanf("%d",&s[i].rno);
		printf("\nEnter name\n");
		scanf("%s",s[i].name);
		printf("\nEnter category (open,obc,nt,st)\n");
		scanf("%s",s[i].category);
		printf("\nEnter Class\n");
		scanf("%s",s[i].cls);
	}
	for(i=0;i<n;i++)
	{
		if (strcmp("open",s[i].category)==0)
			o++;
		else if(strcmp("obc",s[i].category)==0)
			ob++;
		if (strcmp("st",s[i].category)==0)
			st++;
		if (strcmp("nt",s[i].category)==0)
			nt++;
	}

	printf("\nopen category  : %d",o);
	printf("\nOBC category  : %d",ob);
	printf("\nST category   : %d",st);
	printf("\nNT category : %d",nt);
	
}

