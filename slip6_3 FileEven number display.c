//Write C Program to display even numbers from file using command line arguments.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
    if (argc != 2) 
	{
        printf("Invalid number of argument");
        return 1;
    }

    FILE *fp ;
    int num;
    
	fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Even numbers from file %s:\n", argv[1]);
    while (fscanf(fp, "%d", &num) == 1) 
	{
        if (num % 2 == 0) 
		{
            printf("%d\n", num);
        }
    }
    fclose(fp);
    return 0;
}

