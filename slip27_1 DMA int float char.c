/*Write C Program that will dynamically allocate the memory for an integer, 
float and character. Read values in it and display them.*/

#include<stdio.h>
void main()
{
	int *p1;
	float *p2;
	char *p3;
	p1=(int *)malloc(sizeof(int));
	p2=(float *)malloc(sizeof(float));
	p3=(char *)malloc(sizeof(char));
	printf("\n Enter an integer : ");
	scanf("%d",p1);
	printf("\n Enter a float : ");
	scanf("%f",p2);
	printf("\n Enter a character : ");
	scanf(" %c",p3);
	printf("\n You Entered : ");
	printf("%d\t%.2f\t%c",*p1,*p2,*p3);	
}
