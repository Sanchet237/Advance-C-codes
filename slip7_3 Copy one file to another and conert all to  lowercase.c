/*Write C program to accept two filenames as command line arguments. 
Copy the contents of the first file to the second such that the case of all alphabets is reversed.*/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        printf("Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) 
	{
        printf("Error: Unable to open input file.\n");
        return 1;
    }

    FILE *output_file = fopen(argv[2], "w");
    if (output_file == NULL) 
	{
        printf("Error: Unable to open output file.\n");
        fclose(input_file);
        return 1;
    }

    int ch;
    while ((ch = fgetc(input_file)) != EOF) 
	{
        if (islower(ch)) {
            ch = toupper(ch);
        } 
		else if (isupper(ch)) {
            ch = tolower(ch);
        }
        fputc(ch, output_file);
    }

    printf("Contents of %s copied to %s with reversed case.\n", argv[1], argv[2]);

    fclose(input_file);
    fclose(output_file);

    return 0;
}

