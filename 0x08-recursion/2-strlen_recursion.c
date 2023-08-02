#include "main.h"

/**
 * _strlen_recursion - a recursive function that returns the
 * the length of a string
 * @s: the string whose length is returned
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
