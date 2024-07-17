//15. Write C program that will read n numbers using dynamic allocation method and display sum and average of numbers.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,sum=0,avg;
	printf("\nEnter how many numbers : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d : ",(i+1));
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	avg=sum/n;
	printf("\nSum is :  %d\nAverage is : %d",sum,avg);
	
}

