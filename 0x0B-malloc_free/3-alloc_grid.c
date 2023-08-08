#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- a function that returns a pointer to a
 * ponter to a two-dimensional array
 * @width: an array of integers
 * @height: variable holding another array of integers
 * Return: 0 0n success
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;

	int **ar = (int **)malloc(width * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < width; ++i)
	{
		ar[i] = (int *)malloc(height * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; ++j)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < height; ++j)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
