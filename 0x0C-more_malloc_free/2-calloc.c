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

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
	free(ptr);
}
