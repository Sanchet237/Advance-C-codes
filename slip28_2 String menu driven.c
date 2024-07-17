/*Write a menu driven program to perform following operations on strings by using standard library functions.	
1.Read two Strings	2.Display Strings	3.Length
4.Copy	5. Exit */

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
void main()
{
	char s1[10],s2[10],s3[10]; 
	int ch;
	while(1){
		printf("\n1: Read two strings"); 
		printf("\n2: Display two strings"); 
		printf("\n3: Length of the string"); 
		printf("\n4: Copy String");
		printf("\n5: Exit");
		printf("\nEnter your choice :"); 
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter first string \n"); 
				gets(s1);
				gets(s1);
				printf("\nEnter second string \n"); 
				gets(s2);
			break; 

			case 2:
				printf("\nEntered strings are :\n"); 
				puts(s1);
				puts(s2);
			break; 
			
			case 3:
				printf("\nThe length of the first string is %d ",strlen(s1));
				printf("\nThe length of the second string is %d ",strlen(s2));
			break;
			case 4:
				strcpy(s3,s1);
				printf("First string copied is %s",s3);
				break;
			case 5: exit(0);
		}
	}
}

