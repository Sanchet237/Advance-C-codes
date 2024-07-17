/*Write a menu driven program in C that shows the working of a library. The menu option should be
	Add book information.
	Display book information.
	List all books of given author.
	Exit. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Book
{
	int bid;
	char bname[20];
	int price;
	char author[20];
}b[10];
void main()
{
	int i,n=0,flag=0;
	char ch,aname[20];
	
	do
	{
		printf("\nMenu");
		printf("\n1. Add book information.");
		printf("\n2. Display book information.");
		printf("\n3. List all books of given author.");
		printf("\n4. Exit");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Book id : ");
				scanf("%d",&b[n].bid);
				printf("\nEnter Book Name : ");
				scanf("%s",b[n].bname);
				printf("\nEnter Book author : ");
				scanf("%s",b[n].author);
				printf("\nEnter Book price : ");
				scanf("%d",&b[n].price);
				n++;
			break;
			case 2:
				printf("\nAll book information");
				for(i=0;i<n;i++)
				{
				printf("\n\nBook id : %d",b[i].bid);
				printf("\nBook Name : %s",b[i].bname);
				printf("\nBook author : %s",b[i].author);
				printf("\nBook price : %d",b[i].price);
				}
			break;
			case 3:
				printf("\nEnter author name :");
				scanf("%s",aname);
				printf("\nBooks of given author : ");
				for(i=0;i<n;i++)
				{
				if(strcmp(b[i].author,aname)==0)
				{
					flag=1;				
				printf("\n\nBook id: %d",b[i].bid);
				printf("\nBook Name: %s",b[i].bname);
				printf("\nBook author: %s",b[i].author);
				printf("\nBook price: %d",b[i].price);
				}
				}
				if(flag==0)
					printf("\nNo book available for given author");
			break;
			case 4:
				exit(0);

		}
	}while (ch!=4);
	

}
