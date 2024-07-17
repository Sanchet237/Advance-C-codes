//Write C Program that will find first occurrence of character using user defined function and pointers.

#include <stdio.h>
#include<string.h>
int occurence(char *s,char c);
main()
{
	char s[20],c;
	int pos;
	printf("\nEnter the string: ");
	gets(s);
	printf("\nEnter the character to be searched: ");
	c=getchar();
	pos=occurence(s,c);
	if(pos==0)
		printf("\nCharacter is not present in a string");
	else
		printf("\nCharacter '%c' occurs first at position %d ",c,pos);
}
int occurence(char *s, char c)
{
	int i;
	for(i=0;*s!='\0';i++)
	{
		if(*s==c)
		{
		
			return i+1;
		}
		s++;
	}
	return 0;
}
