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
	while( *src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
		*dest = '\0';
	}

}
