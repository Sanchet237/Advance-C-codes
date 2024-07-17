//Write C Program to read the string until the given character is ^. Display the string. Also count the vowels in it.
#include<stdio.h> 
#include<string.h> 
void main()
{
	char ch,str[10]; 
	int i=0,v=0;
	printf("\n Enter string (Enter the character '^' to end the string) : "); 
	
	do
	{
		scanf("%c",&ch);
		str[i]=ch; 
		i++;
	}while(ch!='^');
	str[i]='\0';
	
	printf("\n The entered string is : "); 
	puts(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')|| (str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		vcnt++;
	}
	printf("\n Number of vowels in the given string is %d\n",vcnt); 
}
