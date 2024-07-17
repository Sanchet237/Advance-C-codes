/*2. WAP to accept 3 integers as command line arguments and find minimum,
   maximum and average of 3 numbers.Display error message if the number of
   arguments are invalid */
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int i,sum=0,max,min;
	float avg;
	if(argc!=4)
	{
		printf("\nInvalid number of arguments");
		exit(0);
	}
	
	for(i=1;i<argc;i++)
	{
		sum=sum+atoi(argv[i]);
	}
        
	avg=sum/3;
	printf("\nThe average is %.2f", avg);

	max=atoi(argv[1]);
	for(i=1;i<argc;i++)
	{
		if(atoi(argv[i])>max)
		{
			max=atoi(argv[i]);
		}
	}

	min=atoi(argv[1]);
	for(i=1;i<argc;i++)
	{
		if(atoi(argv[i])<min)
		{
			min=atoi(argv[i]);
		}
	}
	printf("\nThe maximum number is %d",max);
	printf("\nThe minimum number is %d",min);
}
