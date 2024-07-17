// Write C program to sort n strings in descending order. 
#include<stdio.h>
#include<string.h>

int main()
{
	char str[15][10],temp[15]; 
	int i,pass,n;
	printf("\nHow many strings : "); 
	scanf("%d",&n);
	printf("\nEnter the strings : "); 
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(str[i],str[i+1])<0)
			{
				strcpy(temp,str[i]); 
				strcpy(str[i],str[i+1]); 
				strcpy(str[i+1],temp);
			}
		}
	}
               
    	printf("\nStrings in descending order are : \n"); 
	for(i=0;i<n;i++)
	{
		puts(str[i]);
	}
	printf("\n"); 
	return 0;
}

