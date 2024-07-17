//9. Write C program to find the number of vowels in a string. 
#include<stdio.h>
#include<string.h> 

void main()
{
	char str[20]; 
	int i,vcnt=0; 
	printf("\nEnter a string : "); 
	gets(str); 
	for(i=0;str[i]!='\0';i++)
	{

		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		vcnt++;
	}
	printf("\nNumber of vowels in given string are : %d ",vcnt); 
}

