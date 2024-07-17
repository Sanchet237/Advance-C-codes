// Write a C program to find Minimum of 3 numbers using Nested Macro 
#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b)) 
#define MINX(a,b,c) MIN(MIN(a,b),c) 
main()
{
	int a,b,c,m;
	printf("\n Enter 3 Numbers : "); 
	scanf("%d %d %d",&a,&b,&c); 
	m=MINX(a,b,c);
	printf("\n The Minimum Number among Given 3 Numbers is : %d\n",m); 
}
