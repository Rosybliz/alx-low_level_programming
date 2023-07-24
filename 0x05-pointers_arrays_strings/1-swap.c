#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: first swap integer
 * @b: seecond swap integer
 * @temp: temporary placeholder.
 *
 * Description - function swap
 * Return : Always 0
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
