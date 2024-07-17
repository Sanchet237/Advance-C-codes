//2. Write C program to find string length and compare two strings using predefined string functions
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter the data in 1St string :");
	gets(s1);
	printf("\nEnter the data in 2nd string :");
	gets(s2);
	
	printf ("\nString length s1 : %d \t s2 : %d",strlen(s1),strlen(s2));
	
	if(strcmp(s1,s2)==0)
	{
		printf("\nStrings are equal");
	}
	else 
		printf("\nString is not equal.");
	
}
