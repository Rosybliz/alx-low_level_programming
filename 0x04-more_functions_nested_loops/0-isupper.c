#include "main.h"

/**
 * main - a function that prints uppercase
 * Return 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
