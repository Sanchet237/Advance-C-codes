// 2. Write C program to find sum of n numbers using dynamic allocation method.
#include<stdio.h>
int main()
{
	int i,n,*ptr,sum=0;
	printf("\nEnter how many numbers : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d : ",i+1);
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("\nSum is :  %d",sum);
}

