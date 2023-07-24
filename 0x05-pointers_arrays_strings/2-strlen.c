#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts characters in a string
 * @s: the string variable
 *
 * Description: function takes a string as parameter
 * Return: return the length of string
 */

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}
