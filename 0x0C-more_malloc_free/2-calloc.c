#include <stdlib.h>
#include "main.h"

/**
 * _calloc- a function that allocates memory for an array
 * @nmemb: an integer variable for the size of the memory
 * @size: the number of bytes for each element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);
	while ( i <= nmemb)
	{
		*((char *)ptr + 1) = 0;
		i++;
	}
	return (ptr);
	free(ptr);
}
