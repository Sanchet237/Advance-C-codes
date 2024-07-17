/*10. Write C program that accepts names of n cities and write functions for the following: 
a)Search for a city	b)Display a city with the longest name. */
#include <stdio.h>
#include <string.h>

void search(char s[10][15], int n);
void display(char s[10][15], int n);

int main() 
{
    char s[10][15];
    int n, i;
    printf("\nEnter how many cities: ");
    scanf("%d", &n);

    printf("\nEnter the names of cities: ");
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    search(s, n);
    display(s, n);
    
    return 0;
}

void search(char s[10][15], int n)
 {
    char t[10];
    int i, flag = 0;

    printf("\nEnter the name of city to search: ");
    scanf("%s", t);

    for (i = 0; i < n; i++) 
	{
        if (strcmp(t, s[i]) == 0) 
		{
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("\nCity name is present, search successful.\n");
    else
        printf("\nCity name is not present.\n");
}

void display(char s[10][15], int n) 
{
    int maxlen = strlen(s[0]);
    int i,len;

    for (i = 1; i < n; i++)
	 {
        len = strlen(s[i]);
        if (len > maxlen) 
		{
            maxlen = len;
        }
    }

    printf("\nCity(s) with the longest name: ");
    for (i = 0; i < n; i++) 
	{
        if (strlen(s[i]) == maxlen)
            printf("%s ", s[i]);
    }
    printf("\n");
}

