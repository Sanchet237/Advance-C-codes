//Write C program to calculate the factorial of number by using the command line argument.
#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	int fact=1,n,i;
	if(argc!=2)
	{
		exit(1);
	}
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d is %d",n,fact);
	
}
