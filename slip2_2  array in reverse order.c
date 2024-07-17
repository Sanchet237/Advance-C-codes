//Write C program to accept n numbers in an array and display it in reverse order using pointers.
#include<stdio.h>
int main()
{
	int i ,a[20],*p,n;
	printf("Enter the size array :");
	scanf("%d",&n);
	printf("\n Enter %d array elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("\nThe given array in reverse order is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d \t",*(p+i));
	}		
}
