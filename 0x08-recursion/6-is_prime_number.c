#include "main.h"

/**
 * is_prime_number(int n)- a recursive function that outputs the
 * result of prime numbers
 * @n: the integer
 * Return: returns 1 if integer is a prime number 0 if otherwise
 */

int is_prime_number(int n)
{
	if ((n / n) == 1)
		return (1);
	if ((n / n) != 1)
		return (0);
	return (n / (is_prime_number(n, n - 1)));
}
