//Write C program to display arguments and count of arguments passed through command line.
#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Arguments enter in command line \n");
	for(i=1;i<=argc;i++)
	{
		printf("%s",argv[i]);
	}
	printf("Total argument count : %d", argc);
}
