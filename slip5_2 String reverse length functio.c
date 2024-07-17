//4. Write C program to find string length and reverse string using pointers and user defined function. 
#include<stdio.h>
void reverse(char *s,int len)
{
	char *start=s,*end=s+len-1;
	int i;
	for(i=0;i<len/2;i++)
	{
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("\nReversed string: %s\n", s);
}
int main()
{
	char s[20];
	int len;
	printf("Enter the string :");
	gets(s);
	while(s[len]!='\0')
	{
		len++;
	}
	printf("String length : %d",len);
	reverse(s,len);
	return 0;
	
}
