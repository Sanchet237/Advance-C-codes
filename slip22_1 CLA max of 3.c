//Write C program to display maximum of three numbers using command line arguments.
#include<stdio.h>
void main(int argc,char *argv[])
{
	int i,max;
	max=atoi(argv[1]);
	for(i=2;i<argc;i++)
	{
		if(atoi(argv[i])>max)
		{
			max=atoi(argv[i]);
		}
	}
	printf("\n Maximum number is %d",max);
	
}
