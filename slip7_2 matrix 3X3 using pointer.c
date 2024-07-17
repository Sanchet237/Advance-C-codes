//Write a C program to accept a matrix of size 3X3 and print the same using pointer
#include<stdio.h>
void main()
{
	int i,j,m,n,**a;	
	a=(int **)malloc(3 * sizeof(int *));
	for(i=0;i<3;i++)
	{
		a[i]=(int *)malloc(3 * sizeof(int));
	}
	printf("\n Enter Matrix Elements for 3 X 3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",a[i]+j);
		}
	}

	printf("\n Matrix Elements are : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",*(a[i]+j));
		}
		printf("\n");
	}
}                          

