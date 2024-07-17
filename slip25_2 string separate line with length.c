//Write C program that will read the n strings. Display each string on separate line along with its length and also display longest string.
#include<stdio.h> 
#include<string.h> 
void main()
{
	char str[10][10];
	int i,j,max,n,L=0;

	printf("\n Enter how many strings : "); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter a string : "); 
		scanf("%s",str[i]);
	}
	max=strlen(str[0]);
        L=0 ;
	for(i=0;i<n;i++)
	{
		printf("\n String is %s and string length is %d",str[i],strlen(str[i])); 
		if(strlen(str[i])>max)
		{
			max=strlen(str[i]);
			L=i;
		}	
}
	printf("\n\nLongest string %s",str[L]);
}

