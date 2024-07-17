//Write C Program to read numbers from file, store even numbers in even.txt and odd numbers in odd.txt file.
#include <stdio.h>

int main() {
    FILE *fp, *e_fp, *o_fp;
    int number;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    e_fp = fopen("even.txt", "w");
    if (e_fp == NULL) {
        printf("Error opening even file.\n");
        fclose(fp);
        return 1;
    }

    o_fp = fopen("odd.txt", "w");
    if (o_fp == NULL)
	{
        printf("Error opening odd file.\n");
        fclose(fp);
        fclose(e_fp);
        return 1;
    }

    while (fscanf(fp, "%d", &number) != EOF) 
	{
        if (number % 2 == 0) 
		{
            fprintf(e_fp, "%d\n", number);
        } 
		else {
            fprintf(o_fp, "%d\n", number);
        }
    }

    fcloseall();
    printf("Even and odd numbers separated and stored in even.txt and odd.txt respectively.\n");

    return 0;
}

