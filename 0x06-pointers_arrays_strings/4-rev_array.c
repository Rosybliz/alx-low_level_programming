#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the integer variable holding the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;
	while (i < n)
	{
		--a[n];
		tmp = *a;
	}
