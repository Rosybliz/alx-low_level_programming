#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- a function that allocates memory
 * using malloc
 * @b: the integer variable
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	free(ptr);
	return (0);
}
