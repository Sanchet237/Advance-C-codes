//Write C program to check given number is even or odd using macros.

#include<stdio.h>
#define OE(n) (n%2!=0?1:0)

main()
{
	int n;
	printf("\nEnter the number : "); 
	scanf("%d",&n);
	if(OE(n))
		printf("\n%d is odd number\n",n); 
	else
		printf("\n%d is even number\n",n); 
}
