/* 7. Write a C Program to accept multiple strings in command line argument and display length of each string using predefined function */
#include<stdio.h> 
#include<string.h>
void main(int argc,char *argv[])
{
	int i;
	printf("\nNo of strings:%d",argc-1); 
	printf("\n\nStrings with String length :"); 
	for(i=1;i<argc;i++)
	{
		printf("\n%s\t%d",argv[i],strlen(argv[i]));
	}

}

