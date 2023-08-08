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
	unsigned int n = 16;

	s1 = (char *)malloc(n * sizeof(char));
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (*s1)
		s1++;
	while (*s2)
	{
		s1 = s2;
		s1++;
		s2++;
	}
	s1 = '\0';
	free(s1);
	return (0);
}
