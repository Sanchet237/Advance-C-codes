//Write C program to find cube of number using nested macros. 
#include<stdio.h>
#define SQUARE(x) x*x
#define CUBE(x) (SQUARE(x)*(x)) 

main()
{
	int n,c; 
	printf("\nEnter a number : "); 
	scanf("%d",&n); 
	c=CUBE(n);
	printf("\nCube of %d is %d",n,c);
}
