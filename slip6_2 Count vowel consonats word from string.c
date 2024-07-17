//Write C program to count number of vowels, consonants and words in given sentence.
#include<stdio.h>
#include<ctype.h>
int main() 
{
    char str[20];
    int v=0,c=0,w=0,i;
    printf("Enter the sentence: ");
    gets(str);
	strcat(str," "); 
    for(i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]); 
    
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            v++;
        }
        else if(ch >= 'a' && ch <= 'z') {
            c++;
        }
        else if(ch == ' ' || ch == '\t' || ch == '\n') 
		{
            w++;
        }
    }
    
    printf("\nVowel count : %d", v);
    printf("\nConsonant count : %d", c);
    printf("\nWord count : %d\n", w);

    return 0;
}

