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
	int **ag = (int **)malloc(width * sizeof(int *));
	int *btag = (int *)ag;
	int i;

	for (i = 0; i < width; ++i)
		btag[i] = 0;
	ag[i] = (int *)malloc(height * sizeof(int *));
	return (ag);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (ag == NULL)
		return (NULL);

	free(ag);

	return (0);
}
