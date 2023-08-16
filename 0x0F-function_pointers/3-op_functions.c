#include <stdio.h>
/**
 * op_add- a function that adds two integers
 * @a: variable holding first integer
 * @b: variable holding second integer
 * a and b are the arguments to the function
 * Return: return sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- a function that subtracts two integere
 * @a: argument one
 * @b: argument two
 * Return: returns the result of the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- function that multiplies two integers
 * @a: argument 1
 * @b: argument 2
 * Return: result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- function that divids two integers
 * @a: argument 1
 * @b: argument 2
 * Return: result of the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- a function that returns the remainder of a division operation
 * @a: argument 1
 * @b: argument 2
 * Return: remainder of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
