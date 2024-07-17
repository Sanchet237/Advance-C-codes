/*Write a C program to accept n student details like rollno,name,mark1,mark2,mark3. 
Calculate the total and average of marks using structure*/
#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	int marks[3];
	float avg;
}s[10];
void main()
{
	int i,j,n,total=0;

	printf("\nHow many student details you want?");
	scanf("%d",&n);
	printf("\nEnter student details.");
	for(i=0;i<n;i++)
	{
		total=0;
		printf("\nEnter name:");
		scanf("%s",s[i].name);
		printf("\nEnter roll no:");
		scanf("%d",&s[i].rno);
		printf("\nEnter marks of 3 subjects.");
		for(j=0;j<3;j++)
		{
			printf("\nEnter marks:");
			scanf("%d",&s[i].marks[j]);
			total=total+s[i].marks[j];
		}
		s[i].avg=(float)total/3;
	}
	printf("\nThe student details are:");
	for(i=0;i<n;i++)
	{
		printf("\nRollno %d is %s and has average marks %.2f",s[i].rno,s[i].name,s[i].avg);
	}
	
}
