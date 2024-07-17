//Write C program to find maximum and minimum of n numbers using dynamic allocationmethod.
#include<stdio.h>
int main() 
{
    int n,i,max,min;
    
   printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
            max = arr[i];
        
        if (arr[i] < min) 
            min = arr[i];
        }
    
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    
    free(arr);
    
    return 0;
}
