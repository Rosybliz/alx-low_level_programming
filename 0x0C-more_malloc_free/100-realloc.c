#include "main.h"
#include <stdlib.h>

/**
 * _realloc- it will reallocte a memory block using malloc
 * and free
 * @ptr: the pointer
 * @old_size: initial size of integer
 * @new_size: new size of integer
 * Return: returns a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL && new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (ptr == NULL && new_size != 0)

		new_ptr = malloc(new_size);
	return (new_ptr);


	if (old_size == new_size)
		return (ptr);

	free(ptr);
	new_ptr = malloc(new_size);
	return (new_ptr);
}
