//Write C program that will accept the list of file names from command prompt and display all files one after another.
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *fp;
    char ch;
    
    if (argc < 2) 
	{
        printf("atleast 2 file must be there\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) 
	{
        fp = fopen(argv[i], "r");
        if (fp == NULL) {
            printf("Error opening file: %s\n", argv[i]);
            continue; 
        }
        
        printf("Contents of %s:\n", argv[i]);
        while ((ch = fgetc(fp)) != EOF) 
		{
            putchar(ch);
        }
        fclose(fp);
        printf("\n\n"); 
    }
    
    return 0;
}

