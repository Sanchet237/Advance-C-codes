//Write C program that display number of characters and white spaces in string using pointers.

#include<stdio.h> 
#include<string.h> 
void main()
{
	char *str,str1[50];
	int i,ccnt=0,scnt=0; 
	printf("\n Enter a string : "); 
	gets(str1); 
        str=str1; 
	for(i=0;*str!='\0';i++)
	{
		if(*str==' ')
		     scnt++; 
		ccnt++;
		str++;
	}
	printf("\nNumber of characters in a string : %d ",ccnt); 
	printf("\nNumber of white spaces in a string : %d ",scnt);
}
