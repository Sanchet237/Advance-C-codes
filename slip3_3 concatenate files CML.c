#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *f1, *f2, *output_file;
    char ch;

    if (argc != 4) 
	{
        printf("Usage: %s <input_file1> <input_file2> <output_file>\n", argv[0]);
        return 1;
    }

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    output_file = fopen(argv[3], "w");
    
    while ((ch = fgetc(f1)) != EOF) 
	{
        fputc(ch, output_file);
    }

    while ((ch = fgetc(f2)) != EOF) 
	{
        fputc(ch, output_file);
    }

    printf("Files concatenated successfully.\n");

    fclose(f1);
    fclose(f2);
    fclose(output_file);
    
    return 0;
}

