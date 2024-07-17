/*23. Write C program to accept a string and count number of vowels.*/
#include<stdio.h>
#include<string.h>
void main()
{
	int i,vcnt=0;
	char str[20];
	printf("\nEnter the string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		vcnt++;
	}
		printf("\nNumber of vowels in the string are : %d",vcnt);
}
