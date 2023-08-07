#include <stdlib.h>
#include "main.h"

/**
 * create_array- a function that creates an array of character
 * and initializes it with a specific character
 * @c: the variable that holds the string
 * @size: the size of the array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = c;
	return (ptr);
	free(ptr);
}
