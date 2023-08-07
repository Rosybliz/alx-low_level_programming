#include <stdlib.h>
#include "main.h"

/**
 * *_strdup- a function that returns a pointer to a new
 * string which is a duplicate of another string
 * @str: the string pointer to be duplicated
 * Return: a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	int n, i;
	char *ptr = NULL;
	char *str1;

	str = (char *)malloc(n * sizeof(char));
	if (n == 0)
		return (NULL);
	*str1 = (char *)*ptr(str, (n * sizeof(char)));

	for (i = 0; i < n; i++)
	if (str1[i] != '\0')
		return (NULL);
	free(str1);
	
	return (0);
}
