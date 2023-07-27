#include "main.h"

/**
 * string_toupper - a function that changes letters to uppercase
 * @s: the variable holding the character string of lowercase
 * Return: the point to s
 */

char *string_toupper(char *)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		++count;
	}
	return (s);
}
