#include "dog.h"

/**
 * free_dog- a function that free allocated memory
 * @d: the pointer object of the function
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
