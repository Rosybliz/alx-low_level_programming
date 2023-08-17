#include "variadic_functions.h"
/**
 * print_numbers- a fuction that prints numbers
 * @separator: the character pointer to be printed btw numbers
 * @n: the constant number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list my_numbs;

	va_start(my_numbs, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(my_numbs, int));
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_numbs);
}
