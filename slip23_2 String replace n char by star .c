//Write C program to replace first n characters of string by * using pointers and user defined function.
#include<stdio.h> 
void snset(char *s,int n); 
void main()
{
	int n;
	char s[10]; 
	printf("\n Enter the string :"); 
	gets(s);
	printf("\n The enter string is :"); 
	puts(s);
	printf("\n Enter how many characters to be replaced by * :"); 
	scanf("%d",&n);
	snset(s,n);
	printf("\n the replaced string is : %s",s);
}
void snset(char *s,int n)
{
	int i; 
	for(i=0;s[i]!='\0'&&i<n;i++)
		s[i]='*';	
}
