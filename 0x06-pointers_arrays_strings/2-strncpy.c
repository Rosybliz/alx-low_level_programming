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
	int n = 0;
	while( src[n] != '\0')
	{
		*dest = *src;
		++src[n];
		++dest;
		dest = '\0';
	}

}
