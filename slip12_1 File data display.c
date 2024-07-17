//Write C program to display contents of a file.
#include <stdio.h>
int main() 
{
    FILE *fp;
    char fname[100];
    char ch;
    
    printf("Enter the filename: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}

