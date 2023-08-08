#include <stdlib.h>
#include "main.h"

/**
 * str_concat- a pointer that concatenates two strings
 * @s1: string one
 * @s2: string to be appended
 * Return: NULL on failure and 0 on success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size, i, n;

	s1 = (char *)malloc(size * sizeof(char));

	while (*s1)
		s1++;
	while (*s2)
	{
		s1 = s2;
		s1++;
		s2++;
	}
	_putchar('\0');
	if (s1[i] == '\0' || s2[i] == '\0')
		return (NULL);
	free(s1);
	return (0);
}


