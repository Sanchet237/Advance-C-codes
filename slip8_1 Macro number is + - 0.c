/* Write a C program to check whether a number is Positive, Negative or Zero using macro */
#include<stdio.h>
#define ISZERO(n) (n == 0) 
#define ISPOSITIVE(n) (n > 0) 
#define ISNEGATIVE(n) (n < 0) 
main()
{
	int no; 
	printf("\n Enter a Number : "); 
	scanf("%d",&no);
	if (ISZERO(no))
	{
		printf("\n Given Number is Zero ");
	}
	else if (ISPOSITIVE(no))
	{
		printf("\n Given Number is Positive ");
	}
	else if (ISNEGATIVE(no))
	{
		printf("\n Given Number is Negative ");
	}
}
