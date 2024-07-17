//Write a ‘C’ program to read n integers in an array. Display the contents of an array by using pointer and pointer arithmetic.

#include<stdio.h>
main()
{
	int a[10],*ptr,n,i;
	printf("\nEnter number of elements : ");
	scanf("%d",&n);
	printf("\nEnter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	printf("\nEntered elements are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*ptr);
		ptr++;
	}	
}
