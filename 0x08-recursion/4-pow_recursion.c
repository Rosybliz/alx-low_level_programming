#include "main.h"

/**
 * _pow_recursion(int x, int y)- a function that returns the value
 * of an integer raised to the power of another integer
 * @y: integer one
 * @x: integer two
 * Return: return -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
