#include "variadic_functions.h"

/**
 * sum_them_all- a variadic function that returns the
 * sum of all its parameters
 * @n: the constant integer argument which i take as the
 * total number of the numbers to be summed
 * Return: return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int result = 0;

	va_list my_sum;

	if (n == 0)
		return (0);

	va_start(my_sum, n);

	for (; i < n; i++)
		result = result + va_arg(my_sum, int);
	return (result);
}
