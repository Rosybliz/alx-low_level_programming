#include "main.h"

/**
 * swap_int - swaps to input integers
 * @a: first swap integer
 * @b: seecond swap integer
 *
 * Description: function swap
 * Return : void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
