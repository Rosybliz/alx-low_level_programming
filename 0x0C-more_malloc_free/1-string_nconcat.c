#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- a function that concatenates two strings
 * @s1: first string
 * @s2: string to be appended
 * @n: unsigned integer variable
 * Return: Success 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrconcat;
	unsigned int b = 0, m = 0, j = 0;

	while ((s1[b] != '\0') && (s2[m] != '\0' || m < n))
	{
		s1[b] = s2[m];
		b++;
		m++;
		s1[b++] = '\0';
		return (s1);
	}
	ptrconcat = malloc(_strlen(s1) * sizeof(char) + 1);
	if (ptrconcat == NULL)
		return (NULL);
	ptrconcat[j] = s1[b];

	free(ptrconcat);

	return (0);
}

/**
 * _strlen- a function that calculates the length of a string
 * @s: the string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


