/* 6. Write a C Program to create a student structure having fields roll_no,stud_name, and address. Accept details of 'n' students into structure and rearrange the data in alphabetical order of stud_name and display the data*/
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rno;
	char addr[50];
}s[20];
void main()
{
	struct student t;
	int i=0,j=0,n;

	printf("\n How many student records you want to enter?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter name:");
		scanf("%s",s[i].name);
		printf("\n Enter roll no:");
		fflush(stdin);
		scanf("%d",&s[i].rno);
		printf("\n Enter address:");
		scanf("%s",s[i].addr);
	}
	printf("\n Data before Rearrangement is : ");
	for(i=0;i<n;i++)
	{
		printf("\n %s %d %s",s[i].name,s[i].rno,s[i].addr);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("\n Data after rearrangement : ");
	for(i=0;i<n;i++)
	{
		printf("\n %s %d %s",s[i].name,s[i].rno,s[i].addr);
	}	
}

