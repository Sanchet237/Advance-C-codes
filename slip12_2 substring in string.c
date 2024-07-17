/*6. Write C program to accept a string and a substring. 
Check if the substring is present in the given string or not using. If substring is present, replace by 
another string, otherwise display appropriate message.*/	
#include  <stdio.h>
#include  <string.h>
int main() 
{
        char str[20], substr[10], replace[10], output[30];
        int i = 0, j = 0, flag = 0, start = 0;
        printf("Enter your input string:\n");
	gets(str);        

        printf("Enter the substring to be searched:\n");
        scanf("%s",substr);
        printf("Enter the string to replace:\n");
        scanf("%s",replace);
      
        while (str[i] != '\0')
        {
                if (str[i] == substr[j]) 
                {
                        if (!flag)
                                start = i;
                        j++;
                        if (substr[j] == '\0')
                                break;
                        flag = 1;
                } 
                else 
                {
                        flag = start = j = 0;
                }
                i++;
        }  
        if (substr[j] == '\0' && flag)
        {
                for (i = 0; i < start; i++)
                        output[i] = str[i];
                
                for (j = 0; j < strlen(replace); j++) 
                {
                        output[i] = replace[j];
                        i++;
                }

                
                for (j = start + strlen(substr); j < strlen(str); j++)
                {
                        output[i] = str[j];
                        i++;
                }

                
                output[i] = '\0';
                printf("Output: %s\n", output);
        } else {
                printf("%s is not a substring of %s\n", substr, str);
        }
        return 0;
  }
