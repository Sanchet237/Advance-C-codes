/*2. Write C Program to accept book information (book_id, book_name, book_author). Read the details of n number of books. Display book details in ascending order of book name.*/
#include<stdio.h>
#include<string.h>
struct Book 
{
    int book_id;
    char book_name[100];
    char book_author[100];
} b[100],temp; 

int main() 
{
    int n,i,j;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) 
	{
        printf("\nEnter details for Book %d:\n",i + 1);
        printf("Book ID: ");
        scanf("%d",&b[i].book_id);
        printf("Book Name: ");
        scanf("%s",b[i].book_name);
        printf("Book Author: ");
        scanf("%s",b[i].book_author);
    }

    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            if(strcmp(b[i].book_name, b[j].book_name) > 0) 
			{
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("\nBook details in ascending order of book name:\n");
    for(i = 0; i < n; i++) 
	{
        printf("\nBook ID: %d\n", b[i].book_id);
        printf("Book Name: %s\n", b[i].book_name);
        printf("Book Author: %s\n", b[i].book_author);
    }

    return 0;
}

