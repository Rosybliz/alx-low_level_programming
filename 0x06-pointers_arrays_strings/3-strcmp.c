#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:  first string for comparison
 * @s2: second string for comparison
 * Return: return 0 if equal,
 * >0 if s1 is greater and <0 if otherwise
 */

int _strcmp(char *s1, char *s2)
{

	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		
		++s1;
		++s2;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

