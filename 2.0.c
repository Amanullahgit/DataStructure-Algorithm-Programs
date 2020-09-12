/* 2.0 Write a program to multiply two matrices. */

#include <stdio.h>


void main()
{
	int firstMatrix[3][3], secondMatrix[3][3], mult[3][3], i, j, k;


printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			printf("Enter elements a: %d %d: ", i + 1, j + 1);
			scanf("%d", &firstMatrix[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			printf("Enter elements b: %d %d: ", i + 1, j + 1);
			scanf("%d", &secondMatrix[i][j]);
		}
	}
	
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			mult[i][j] = 0;
		}
	}
	
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			for(k=0; k<3; ++k)
			{
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
	
	
	printf("\nOutput Matrix:\n");
	for(i = 0; i < 3; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			printf("%d  ", mult[i][j]);
			if(j == 3 - 1)
				printf("\n\n");
		}
	}
}
