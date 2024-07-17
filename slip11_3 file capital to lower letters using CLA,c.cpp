//Write C program to replace capital letters in file by lowercase letter using command line arguments and display the contents of file .
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *original_file = fopen(argv[1], "r");
    FILE *temp_file = fopen("temp.txt", "w");
    int ch;
    
    while ((ch = fgetc(original_file)) != EOF) 
	{
        if (isupper(ch)) 
		{
            ch = tolower(ch);
        }
        fputc(ch, temp_file);
    }


    fclose(original_file);
    fclose(temp_file);

    remove(argv[1]);
    rename("temp.txt", argv[1]);

    original_file = fopen(argv[1], "r");
    if (original_file == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Contents of the file after modification:\n");
    while ((ch = fgetc(original_file)) != EOF) 
	{
        putchar(ch);
    }

    fclose(original_file);

    return 0;
}

