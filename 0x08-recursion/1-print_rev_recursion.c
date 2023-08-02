#include "main.h"
#include <stdio.h>

/**
 * _print_rev-recursion - a recursive function that prints 
 * a string in reverse
 * @s: the string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
