#include "main.h"
#include <stdio.h>

/**
 * main - takes pointer as parameter
 * and updates the value to 98 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int *g;

    n = 402;
    g = &n;
    _putchar("n=%d\n", n);
    void reset_to_98(int *n);
    *g = 98;
    _putchar("n=%d\n", n);
    return (0);
}
