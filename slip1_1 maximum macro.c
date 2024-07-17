/*Q1) Write C program to find maximum of two numbers using macros.*/
#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b)) 
void main()
{
	int a=20,b=56;
	printf("Maximum of %d and %d : %d ",a,b,max(a,b));
}
