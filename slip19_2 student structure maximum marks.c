/* Write C Program to accept n records of student information (sno,sname,marks) 
and display record of students having maximum marks. */
#include <stdio.h>
struct student
{
	int sno;
	char sname[20];
	int marks;
}s[10];

void main()
{
	int i=0,n,t;
	int max=0;

	printf("Enter how many students: \n");
	scanf("%d",&n);
	printf("\n Enter student details: ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter student id : ");
		scanf("%d",&s[i].sno);
		printf("\n Enter student name : ");
		scanf("%s",s[i].sname);
		printf("\n Enter student marks : ");
		scanf("%d",&s[i].marks);
		if(s[i].marks>=max)
		{
			max=s[i].marks;
			t=i;
		}
	}
	printf("\n Student record with maximum marks : ");
	printf("\n Student id : %d\n Student Name : %s\n Marks : %d",s[t].sno,s[t].sname,s[t].marks);
}
