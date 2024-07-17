//Write C program to interchange values of two numbers using pointers.
#include<stdio.h>
main()
{
	int a,b,*p1,*p2,temp;
	printf("Enter the value of x and y:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a=%d and b=%d",a,b);
	p1=&a;
	p2=&b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("\nAfter swapping a=%d and b=%d",a,b);
}

