//6. Write C program to multiply two numbers using function pointer.
#include<stdio.h>
int mul (int n1,int n2)
{
	return(n1 * n2);
}
int main()
{
	int num1,num2,result;
	int (*ptr)(int,int);
	ptr = mul;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&num1,&num2);
	result = (*ptr)(num1,num2);
	printf("Multiplication is : %d",result);
	return(0);
}

