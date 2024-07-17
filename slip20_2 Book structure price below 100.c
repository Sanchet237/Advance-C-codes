/* 10. Write a ‘C’ program to accept the book details such as BookID, Title, Author, Price. 
Read the details of n number of books. 
Display the details of those books which are priced below Rs.100.*/
#include <stdio.h>
struct books
{
	int bid;
	char title[20],author[20];
	int price;
}b[10];

void main()
{
	int i,n;
	printf("\nEnter how many books: \n");
	scanf("%d",&n);
	printf("\nEnter book details: ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter book id: ");
		scanf("%d",&b[i].bid);
		printf("\nEnter book title and author: ");
		scanf("%s %s",b[i].title,b[i].author);
		printf("\nEnter book price: ");
		scanf("%d",&b[i].price);
	}
	printf("\nBook priced below Rs. 100");
	for(i=0;i<n;i++)
	{
		if(b[i].price<100)
		{
			printf("\nBook id : %d\nBook Title : %s\nBook Author : %s\nBook Price : %d",b[i].bid,b[i].title,b[i].author,b[i].price);
		}
	}
	
}
