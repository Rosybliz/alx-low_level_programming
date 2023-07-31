#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: the variable that contains bytes
 * Return: a pointer to s that matches one
 * of the bytes or NULL if no bytes is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int ps = 0;
	unsigned int fg = 0;

	while (*(s + i))
	{
		i++;
	}
	ps = i;
	i = 0;

	while (*(accept + i))
	{
		j = 0;

		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= ps)
				{
					ps = j;
					fg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (fg == 1)
	{
		return &s[ps];
	}
	return ('\0');
}
