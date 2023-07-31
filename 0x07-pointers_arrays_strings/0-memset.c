#include "main.h"

/**
 * *_memset - a function that fills memory with constant byte
 * @s: a pointer pointing to the memory area
 * @b: the variable to be filled
 * @n: the number of bytes to be filled
 * Return: Returns a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
