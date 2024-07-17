/*Write a program to find sum and average of n elements entered by user. 
To perform this, allocate memory dynamically using calloc() function.*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,*ptr,sum=0,n,avg;
	
	printf("\nEnter how many numbers : ");
	scanf("%d",&n);

	ptr=(int*)calloc(n,sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d : ",i+1);
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	avg=sum/n;
	printf("\nSum of numbers is %d \nAverage of numbers is %d",sum,avg);
	
}
