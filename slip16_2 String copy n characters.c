/*Write C program to pass two strings to user defined function and copy only ‘n’ 
characters of one string to another string using pointers and user defined function. */

#include<stdio.h> 
char* sncpy(char *,char *,int ); 
void main()
{
	char s_str[20],d_str[20]; 
	int n;
	char *dest=NULL; 
	printf("\nEnter the string : "); 
	gets(s_str);
	printf("\nEnter number of character to copy : "); 
	scanf("%d",&n);
	dest=sncpy(d_str,s_str,n);
	printf("\nDestination string after copy %d character is : %s",n,dest); 
}
char* sncpy(char *dest,char *src,int n)
{
	char *temp=dest; 
	while (n--)
	{
		*dest=*src; 
		dest++; 
		src++;
	}
	*dest='\0'; 
	return temp;
}
