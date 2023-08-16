#include "function_pointers.h"

/**
 * array_iterator- a callback function
 * @array: an array of integers
 * @size: the size of the array
 * @action: the function pointer called by the callback function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		for (; i < size; i++)
		action(array[i]);
	}
}
