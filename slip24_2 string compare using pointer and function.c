//17. Write C program to compare n characters of two strings using pointers and user defined function.
#include<stdio.h> 
#include<string.h>
int sncmp(char *,char *,int); 
void main()
{
	char s1[20],s2[20]; 
	int n,res;

	printf("\nEnter the first string: "); 
	gets(s1);
	printf("\nEnter the second string: "); 
	gets(s2);
	printf("\nEnetr number of characters u want to compare : "); 
	scanf("%d",&n);
	
	res=sncmp(s1,s2,n); 
	if(res==1)
		printf("\nThe strings are same."); 
	else
		printf("\nThe Strings are not same.");
}
int sncmp(char *s1,char *s2,int n)
{
	int i;
	for(i=0;(*s1!='\0')&&(*s2!='\0')&&(i<n);i++)
	{ 
		if(*s1!=*s2)
			return 0;
		s1++;
		s2++;
	}
         if(*s1=='\0' || *s2=='\0')
		return 0;
	return 1;
}

