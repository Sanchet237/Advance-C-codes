/*Write a macro CALC that will compute the circumference of a circle. 
Using this macro find the circumference for the given radius.*/
#include<stdio.h> 
#define pi 3.142
#define CALC(r) 2*pi*r 
main()
{
	int r; float c; 
	printf("\n Enter radius of circle : "); 
	scanf("%d",&r);
	c=CALC(r);
	printf("\n Circumference of the circle = %.2f\n",c); 
}

