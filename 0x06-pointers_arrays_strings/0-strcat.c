#include "main.h"

/**
 * _strcat - joins or concatenates two strings
 * @dest: string one
 * @src: string to be appended
 * Description: two strings are joined and a terminating
 * null byte added
 * Return : dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int index = 'n';
while (dest[i] != '\0')
{
++i;
}
for (i = 0; src[i] <= index; ++i)
{
dest[i] = src[i];
}
return (dest);
}


