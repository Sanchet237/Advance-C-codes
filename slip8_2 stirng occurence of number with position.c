/*Write C program to accept an array and a number. Check whether the number is present in
the array, print the index number of the all occurrence of that number.*/
#include<stdio.h>
int main() 
{
    int a[10], i, n, num, count = 0, flag = 0;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the array: ");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number to be searched: ");
    scanf("%d", &num);

    printf("Indices of %d in the array:", num);
    for (i = 0; i < n; i++) 
	{
        if (a[i] == num) 
		{
            flag = 1;
            printf(" %d", i);
        }
    }

    if (flag == 0)
        printf("\n%d is not present.", num);

    return 0;
}
