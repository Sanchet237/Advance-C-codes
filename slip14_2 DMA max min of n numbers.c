// Write C Program to accept n numbers using dynamic allocation method and display maximum and minimum of them.
#include <stdio.h>
#include<stdlib.h>
void main()
{
	int *a,i,n,max=0,min;
	
	printf("\nEnter the how many numbers : ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
			printf("\nEnter number %d : ",i+1);
			scanf("%d",a+i);
	}
	min=*a;
	for(i=0;i<n;i++)
	{
		if(*a>max)
			max=*a;
		if(*a<min)
			min=*a;
		a++;
	}
	printf("\nMaximum number is : %d",max);
	printf("\nMinimum number is : %d",min);
	
}
