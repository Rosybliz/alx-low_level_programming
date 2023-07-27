#include "main.h"

/**
 * _strncat - joins or concatenates two strings
 * @dest: string one
 * @src: string to be appended
 * Description: two strings are joined and a terminating
 * null byte added
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;

while (dest[i] != '\0')
{
++i;
}
for (i = 0; src[i] <= n; ++i)
{
dest[i] = src[i];
}
return (dest);
}
