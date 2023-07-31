#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: the sting that stores the character to be located
 * @c: the character to be located
 * Return: returns a pointer to the first ocurrence of the character
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

