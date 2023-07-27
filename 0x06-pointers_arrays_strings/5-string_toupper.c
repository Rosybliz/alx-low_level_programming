#include "main.h"

/**
 * string_toupper - a function that changes letters to uppercase
 * @char: the variable holding the character string of lowercase
 * Return: Always 0
 */

char *string_toupper(char *)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) >= 97) && (*(s + c) <= 122))
			*(s + c) = *(s + c) - 32;
		++c;
	}
	return (s);
}
