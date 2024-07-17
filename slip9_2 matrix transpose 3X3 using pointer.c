//5. Write C program to accept a matrix of size 3x3 and print transpose of the matrix using pointer.
#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int i, j, **a;
    
    a = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++) 
	{
        a[i] = (int *)malloc(3 * sizeof(int));
    }

    printf("Enter Matrix Elements for 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", *(a + i) + j);
        }
    }

    printf("\nOriginal Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",*(a[i]+j));
		}
		printf("\n");
	}

    printf("\nTranspose of the Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",*(a[j]+i));
		}
		printf("\n");
	}

    for (i = 0; i < 3; i++) 
	{
        free(a[i]);
    }
    free(a);

    return 0;
}

