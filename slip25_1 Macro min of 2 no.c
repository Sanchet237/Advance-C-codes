//Write C program to find minimum of two numbers using macros. 
#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b)) 
main()
{
	int a,b,c,m;
	printf("\n Enter 2 numbers : "); 
	scanf("%d%d",&a,&b); 
	m=MIN(a,b);
	printf("\n Minimum of two numbers = %d\n",m); 
}

