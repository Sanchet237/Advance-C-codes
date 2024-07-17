//Write C program to interchange values of two numbers using pointers.
#include<stdio.h>
int main()
{
	int *p1,*p2,n1,n2,t;
	printf("Enter the two numbers n1 and n2 :");
	scanf("%d%d",&n1,&n2);

	printf("\n\nBefore swapping n1=%d and n2=%d",n1,n2);
	p1=&n1; p2=&n2;
	
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("\n\nAfter swapping n1=%d and n2=%d",n1,n2);
	 
}
