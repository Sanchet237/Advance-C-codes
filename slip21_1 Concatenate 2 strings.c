//14. Write C program to find compare and concatenate two strings using predefined string functions.

#include <stdio.h>
#include<string.h> 
void main()
{
	char a[10],b[10]; 
	printf("\nEnter the two strings: "); 
	gets(a);
	gets(b); 
	if(strcmp(a,b)==0)
		printf("\nThe two strings are equal..."); 
	else if(strcmp(a,b))
		printf("\nThe two strings are not equal..."); 
	strcat(a,b);
	printf("\nThe concatenation of two strings is: %s",a); 
}

