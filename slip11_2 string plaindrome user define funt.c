//Write C program to check whether a given string is palindrome or not using user defined function and pointers.
#include<stdio.h>

int palindrome(char *str, int len) 
{
	int i;
    for (i = 0; i < len; i++, len--)
        if (str[i] != str[len - 1])
            return 0;
    return 1;
}
int main() 
{
    char string[20], *p = string,len=0;
    printf("\nEnter the String= ");
    scanf("%s", string);
    while(string[len]!='\0')
    {
		len++;
	}

    if (palindrome(string, len))
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}
