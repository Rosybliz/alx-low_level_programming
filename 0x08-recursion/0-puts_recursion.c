#include main.h

/**
 * _puts_recursion - the recursive function
 * @s: the string to be printed
 * @n: the index of the strings
 * @a: the variable that holds the string outputs
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	int n = 0;
	int a;

	if (*s == '\0')
		return (s);
	else

		a = _puts_recursion(*s[n + 1]);
		_putchar(a);

	_putchar('\n');
}


