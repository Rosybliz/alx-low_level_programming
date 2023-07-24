#include "main.h"
#include <stdio.h>

/**
 * _puts - displays string to stdout
 * @str: the string output
 * Description: the string displayed on stdout is followed by new line
 * Return : void
 */

void _puts(char *str)
{
while (*str != '\0')
_putchar(*str);
str++;
}
_putchar('\n');
}
