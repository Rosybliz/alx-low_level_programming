#include "function_pointers.h"

/**
 * print_name- a function that prints a name
 * @name: a character pointer variable that will hold the name
 * @f: a pointer to the function or function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
