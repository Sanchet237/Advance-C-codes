/*Q2) Write C program to reverse string using pointers and user defined function.*/
#include<stdio.h>
void reverse(*str)
{
	char rs[20],*p1,*p2; 
	int i,j=0,len=0;
	p1=str; p2=rs;
	
	while(str[len] != '\0') 
	{
        len++;
    }  	

	for(i=len-1;i>=0;i--)
	{
		p2[j++]=p1[i];
	}
	p2[j]='\0';
	return p2;
}
void main()
{
	int str[20];
	printf("Enter the string :");
	gets(str);
	
	printf("After reversing string :%s"reverse(str));
}


