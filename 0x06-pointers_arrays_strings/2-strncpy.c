#include "main.h"

/**
 * _strncpy - copies a string and places it in another string
 * @dest: empty string
 * @src: string to be copied
 * @n: integer value
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for (; i < n; ++i)
		dest = '\0';
	return (0);
}
