#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * _mul- a function that multiplies two positive integers
 * @num1: integer one
 * @num2: second integer
 * @s: the string
 * Return: 0 suceess
 */

int _mul(unsigned int num1, unsigned int num2)
{
	char s[] = "Error";

	int mul = num1 * num2;


	if (argc - 1 != 2)
	{
		_puts(s);
		_putchar('\n');
		exit(98);
	}
	if (!isdigit(num1) && !isdigit(num2))
	{
		_puts(s);
		_putchar('\n');
		exit(98);
	}
	return (mul);
}

/**
 * _puts- a function that outputs a string
 * @s: the string to be outputed
 * @c: the return variable
 * @Return: return the string
 */
char _puts(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		char c = s[i];

		i++;
	}
	return (c);
}
