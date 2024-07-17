//Write C program to find maximum of two numbers using macros. 
#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b)) 
main()
{
	int a,b,m;
	printf("\nEnter the values of a and b : "); 
	scanf("%d%d",&a,&b);
	m=MAX(a,b);
	printf("\nThe maximum of two numbers is : %d\n",m); 
}
