//Write a macro that will generate the code to make the sum of given 3 integers. 
#include <stdio.h>
#define SUM(a,b,c) a+b+c 
main()
{
	int a,b,c;
	printf("\nEnter the values of a,b,c: "); 
	scanf("%d %d %d",&a,&b,&c);
	printf("\nThe sum of three numbers is: %d\n",SUM(a,b,c)); 
}

