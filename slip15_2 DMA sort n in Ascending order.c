//Write C program to read ‘n’ numbers using dynamic memory allocation and sort numbers using ascending order.
#include<stdio.h>

void main()
{
	int *p,n,i,j,t,pass;
	
	printf("\n How many numbers you want to be sorted?");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\n Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(*(p+i)>*(p+i+1)) 	
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
	printf("\n After sorting in ascending order:\n");
	for(i=0;i<n;i++)
	printf("\n %d",*(p+i));
}

