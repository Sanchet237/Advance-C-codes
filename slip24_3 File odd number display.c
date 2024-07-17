//Write C Program to display odd numbers from file using command line arguments
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *fp;
    int num;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error opening file: %s\n", argv[1]);
        return 1;
    }

    printf("Odd numbers from file %s:\n", argv[1]);
    while (fscanf(fp, "%d", &num) != EOF) 
	{
        if (num % 2 != 0) 
		{
            printf("%d\n", num);
        }
    }

    fclose(fp);

    return 0;
}

