#include <stdio.h>
#include <ctype.h>
void alternateToUpper(char *str) 
{
    int i = 0;
    for (i=0;*str!='\0';i++) 
	{
        if (i % 2 == 0) 
		{
            *str = toupper(*str);
        }
        str++;
    }
}

int main() 
{
    char str[20];

    printf("Enter a string: ");
    gets(str);

    alternateToUpper(str);

    printf("String with alternate Uppercase : %s\n", str);

    return 0;
}

