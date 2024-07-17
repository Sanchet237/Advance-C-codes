//Write C program to compare two files. If they are not equal display appropriate message.
#include <stdio.h>
int main() 
{
    FILE *fp1, *fp2;
    char f1_name[100], f2_name[100];
    char ch1, ch2;
    int equal = 1;

    printf("Enter the first file name: ");
    scanf("%s", f1_name);
    printf("Enter the second file name: ");
    scanf("%s", f2_name);

    fp1 = fopen(f1_name, "r");
    fp2 = fopen(f2_name, "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch1 = fgetc(fp1)) != EOF && (ch2 = fgetc(fp2)) != EOF) {
        if (ch1 != ch2) {
            equal = 0;
            break;
        }
    }

    if (equal && ((ch1 = fgetc(fp1)) != EOF || (ch2 = fgetc(fp2)) != EOF)) {
        equal = 0;
    }

    if (equal) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

