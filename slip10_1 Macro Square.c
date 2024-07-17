//Write C program to find square of number using macro. 
#include<stdio.h>
#define square(n) (n)*(n) 
main()
{
	int a,h ; 
	printf("\nEnter a number you want to find the sqaure of : "); 
	scanf("%d",&a);
	h=square(a);
	printf("\nThe square of your number is : %d\n",h); 
}
