#include "main.h"

/**
 * is_palindrome(char *s)- a recursive function that checks
 * if a string is a palindrome
 * @s: the pointer to a string
 * Return: returns 1 if string is a palindrome
 * and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == " ")
		return (1);
	if (*s != " ")
		return (0);
	_putchar(*(s));
	return (is_palindrome(++s));
}
