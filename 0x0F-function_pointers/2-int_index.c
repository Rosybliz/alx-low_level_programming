#include "function_pointers.h"

/**
 * int_index- a callback function that searches for an integer
 * in an array
 * @array: the array
 * @size: the size of the array
 * @cmp: the function pointer to be used to compare values
 * Return: return theindex of the first element if success
 * -1 if failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, n = -1;

	if (array != NULL && cmp != NULL)
	{
		for ( ; i < size; i++)
		{
			if (!isdigit(cmp((char)array[i])))
				n = i;
			break;
		}
		if (size <= 0)
			return (-1);
	}
	return (n);
}
