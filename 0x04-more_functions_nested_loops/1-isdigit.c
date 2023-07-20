#include "main.h"

/**
 * _isdigit - checks if character is a digit btw 0 and 9
 *
 * @c: variable to be tested
 * Return 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
