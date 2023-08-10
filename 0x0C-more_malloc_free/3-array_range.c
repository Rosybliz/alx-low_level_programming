#include <stdlib.h>
#include "main.h"

/**
 * array_range- a function that creates an array of integers
 * @min: the smallests integer in the array
 * @max: the largest integer of the array
 * Return: 0 on success
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	int math = max - (min - 1);

	ptr = malloc(math * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
	free(ptr);
}
