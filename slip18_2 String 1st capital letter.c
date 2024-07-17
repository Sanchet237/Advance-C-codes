// Write C program to find the First Capital Letter in a String .Write a function iscap() to find the first capital letter .
#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 

char iscap(char *); 
void main()
{
	char str[20],ch; 
	printf("\nEnter a string : "); 
	scanf("%s",str);
	ch=iscap(str); 
	if(ch==0)
	{
		printf("\nNo capital letter is present in %s ",str);
	}
	else
	{
		printf("\nThe first capital letter in %s is %c ",str,ch);
	}
}

char iscap(char *str)
{
	int i=0; 
	while(i<strlen(str))
	{
		if(isupper(str[i]))
		{
			return str[i];
		} 
		i++;
	}
	return 0;
}

