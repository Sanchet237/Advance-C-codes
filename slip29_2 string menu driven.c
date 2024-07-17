/* 22. Write a menu driven program to perform following operations on strings by using standard library functions.
1.Read 2 Strings 2. Display Strings 3. Copy 4. Compare 5. Concatenate */


#include<stdio.h> 
#include<string.h> 
void main()
{
	char s1[10],s2[10],s3[10]; 
	int i;
	do
	{
		printf("\n1: Read two strings"); 
		printf("\n2: Display two strings"); 
		printf("\n3: Copy");
		printf("\n4: Compare"); 
		printf("\n5: Concatenate"); 
		printf("\n6: Exit\n"); 
		printf("\nEnter your choice : "); 
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("\nEnter first string : "); 
			scanf("%s",s1);
			printf("\nEnter second string : "); 
			scanf("%s",s2);
			break; 
			
			case 2:
			printf("\nEntered strings are : \n"); 
			puts(s1);
			puts(s2);
			break;
 
			case 3:
			strcpy(s3,s1);
			printf("\nThe copied string is : %s",s3);
			break; 

			case 4:
			if(strcmp(s1,s2)==0)
				printf("\nStrings are equal");
			else
				printf("\nStrings are not equal");
 			break;
 
			case 5:
				strcat(s1,s2);
				printf("\nThe concatenated string is %s ",s1);
			break;
		
		}
	}while(i!=6); 
}
