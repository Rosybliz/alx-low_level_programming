#include "main.h"
/**
 * *_memcpy: a function that copies bytes from memory area
 * @dest: the variable to store the copied memory area
 * @src: the variable from which the memory is to be copied
 * @n: the number of memory to be copied
 * Return: Return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
