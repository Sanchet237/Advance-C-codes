//Write C Program to accept n books information (bookid, bname, price) and store it in file and display the same.
#include <stdio.h>
struct Book 
{
    int book_id;
    char book_name[100];
    float price;
}books[20];

int main() 
{
    FILE *fp;
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
	{
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);
        printf("Book Name: ");
        scanf("%s", books[i].book_name);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    fp = fopen("books.txt", "w");
    
    for(i = 0; i < n; i++) 
	{
        fprintf(fp, "%d %s %.2f\n", books[i].book_id, books[i].book_name, books[i].price);
    }

    fclose(fp);
    
    printf("Book details written to file successfully!\n");
    fp = fopen("books.txt", "r");

    printf("\nBook details from file:\n");
    while (fscanf(fp, "%d %s %f", &books[i].book_id, books[i].book_name, &books[i].price) != EOF) 
	{
        printf("Book ID: %d, Name: %s, Price: %.2f\n", books[i].book_id, books[i].book_name, books[i].price);
    }

    fclose(fp);

    return 0;
}


