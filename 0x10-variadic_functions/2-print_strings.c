#include "variadic_functions.h"
/**
 * print_strings- a function that prints strings
 * @separator: the char pointer to be printer btw strings
 * @n: the constant number of elements
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list my_s;

	va_start(my_s, n);
	for (; i < n; i++)
	{
		if (va_arg(my_s, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(my_s, char*));

		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_s);
}
